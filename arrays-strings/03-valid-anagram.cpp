#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s,string t){if(s.size()!=t.size())return false;array<int,26>c{};for(char x:s)c[x-'a']++;for(char x:t)c[x-'a']--;for(int x:c)if(x)return false;return true;}
int main(){cout<<boolalpha<<isAnagram("anagram","nagaram")<<"\n";cout<<isAnagram("rat","car")<<"\n";}
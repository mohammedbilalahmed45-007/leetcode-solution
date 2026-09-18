#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>&s){if(s.empty())return"";string p=s[0];for(int i=1;i<s.size();i++){while(s[i].find(p)!=0){p.pop_back();if(p.empty())return"";}}return p;}
int main(){vector<string>a{"flower","flow","flight"};cout<<longestCommonPrefix(a)<<"\n";vector<string>b{"dog","racecar","car"};cout<<longestCommonPrefix(b)<<"\n";}
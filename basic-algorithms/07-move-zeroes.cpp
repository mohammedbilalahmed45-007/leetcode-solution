#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>&a){int p=0;for(int x:a)if(x)a[p++]=x;while(p<a.size())a[p++]=0;}
int main(){vector<int>a{0,1,0,3,12};moveZeroes(a);for(int x:a)cout<<x<<" ";cout<<"\n";vector<int>b{0,0};moveZeroes(b);for(int x:b)cout<<x<<" ";cout<<"\n";}
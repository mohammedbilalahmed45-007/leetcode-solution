#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>&p){int mn=INT_MAX,ans=0;for(int x:p){mn=min(mn,x);ans=max(ans,x-mn);}return ans;}
int main(){vector<int>a{7,1,5,3,6,4};cout<<maxProfit(a)<<"\n";vector<int>b{7,6,4,3,1};cout<<maxProfit(b)<<"\n";}
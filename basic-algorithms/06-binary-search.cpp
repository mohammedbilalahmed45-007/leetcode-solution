#include <bits/stdc++.h>
using namespace std;
int search(vector<int>&a,int t){int l=0,r=a.size()-1;while(l<=r){int m=l+(r-l)/2;if(a[m]==t)return m;if(a[m]<t)l=m+1;else r=m-1;}return-1;}
int main(){vector<int>a{-1,0,3,5,9,12};cout<<search(a,9)<<"\n";cout<<search(a,2)<<"\n";}
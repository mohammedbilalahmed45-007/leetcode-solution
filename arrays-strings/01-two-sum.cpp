#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums,int target){unordered_map<int,int> m;for(int i=0;i<nums.size();i++){int need=target-nums[i];if(m.count(need))return{m[need],i};m[nums[i]]=i;}return{};}
int main(){vector<int>a{2,7,11,15};auto r=twoSum(a,9);cout<<r[0]<<" "<<r[1]<<"\n";vector<int>b{3,3};auto e=twoSum(b,6);cout<<e[0]<<" "<<e[1]<<"\n";}
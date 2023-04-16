#include <bits/stdc++.h>
using namespace std;
void CombSumHelper(int idx,vector<int>C,vector<vector<int>>&ans,vector<int>&v,int tar)
{
    int n=C.size();
    //base case
    if(tar==0)
    {
        ans.push_back(v);
        return;
    }
    if(tar<0)return ;
    if(idx>=n)return;
    //recursive case
    v.push_back(C[idx]);
    //case 1 take
    CombSumHelper(idx,C,ans,v,tar-C[idx]);
    //backtraacking
    v.pop_back();
    //case 2 not take
    CombSumHelper(idx+1,C,ans,v,tar);
}
vector<vector<int>>CombSum(vector<int>&candidates,int tar)
{
  vector<vector<int>>ans;//
  vector<int>v;//current vector
  CombSumHelper(0,candidates,ans,v,tar);
  return ans;
}
int main() {
    int n,tar;
    cin>>n>>tar;
    vector<int>candidates(n);
    for(int i=0;i<n;i++)
    cin>>candidates[i];
    vector<vector<int>>ans=CombSum(candidates,tar);
    for(auto x:ans)
    {
        for(auto y:x)
        cout<<y<<" ";
        cout<<endl;
    }
}

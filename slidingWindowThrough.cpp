#include<bits/stdc++.h>
using namespace std;
int main()
{
   int k;
   cin>>k;
   queue<int>q;
    int cnt=0;
    int sum=0;
    while(true){
        int inp;
        cin>>inp;
        if(inp==-1)
        break;
        cnt++;
        if(cnt<=k)
        {
            sum+=inp;
            q.push(inp);
            cout<<fixed<<setprecision(4)<<sum/(double)cnt<<" ";
        }
        else
        sum-=q.front();
        q.pop();
        sum+=inp;
        q.push(inp);
        cout<<fixed<<setprecision(4)<<sum/(double)k<<" ";
    }
}

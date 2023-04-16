#include<bits/stdc++.h>
using namespace std;
string moveALLX(string s)
{
    if(s.length()==0)
    return "";
    char ch=s[0];
    // cout<<ch<<" "<<endl;
    string ans=moveALLX(s.substr(1));
    // cout<<ans<<endl;
    cout<<ch<<endl;
    if(ch=='x')
    {
    //   return ans+ch;
    //   cout<<ans+ch<<endl;
      }return ch+ans;

}
int main()
{
    string s;
    cin>>s;
   cout<<moveALLX(s)<<endl;
}

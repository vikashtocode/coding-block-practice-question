#include<iostream>
using namespace std;
string removealldupl(string s)
{
    //base case
    if(s.length()==0)
    {
        return"";
    }
    char ch=s[0];
    string ans=removealldupl(s.substr(1));
    if(ch==ans[0])
    {
      return ch+"*"+ans;
    } return ch+ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<removealldupl(s)<<endl;;
}
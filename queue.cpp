#include <iostream>
using namespace std;
class queue
{
    public:
    int a[5];
    int first;
    int last;
    int sz,n;
    queue()
    {
        first=0;
        last=0;
        n=5;
        sz=0;
    }
   void push(int val)
    {
        if(isfull())
        {
            cout<<"queue is full"<<endl;
            return;
        }
        a[last]=val;
         last++;
    }
    bool isfull()
    {
        return last==n;
    }
    bool empty(){ return first==last;}
    void pop()
    {
        first++;
    }
    void display()
    {
        if(empty())
        cout<<"queue is full";
        for(int i=first;i<last;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    queue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ip;
        cin>>ip;
        q.push(ip);
     }
    q.display();
    q.pop();
    q.display();
    q.pop();
    q.display();
     q.pop();
    q.display();
     q.pop();
    q.display();
     q.pop();
    q.display();
    q.display();
    q.push(6);
}

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
int size()
{
  return sz;
}
void push(int val)
{
    if(isfull())cout<<"queue is full"<<endl;
     a[last]=val;
     last=(last+1)%n;
     sz++;
}

bool isfull(){
    return size()==n;
}
void pop()
{
    if(empty())cout<<"queue is empty"<<endl;
    first=(first+1)%n;
    sz--;
}
bool empty(){
    return size()==0;
}
void display()
{
    if(size()==0)
    {
        cout<<"queue is empty"<<endl;
    return;
    }
    if(first<last)
    {
        for(int i=first;i<last;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
    else
    {
        //i.e first>=last
        //first print first to n-1
        for(int i=first;i<n;i++)cout<<a[i]<<" ";
        //print 0 to last-1
        for(int i=0;i<last;i++)cout<<a[i]<<" ";
        cout<<endl;
    }

    //alter native by shabir
    // cout<<a[first]<<" ";
    // for(int i=first+1;i!=last;i=(i+1)%n)cout<<a[i]<<" ";
    // cout<<endl;
    
    // for(int i=first;i<last;i++)
    // cout<<a[i]<<" ";
    // cout<<endl;
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
   cout<<q.size()<<endl;
   //reuse our space
   q.push(6);
   q.display();
   q.push(7);
   q.display();
   q.display();
}

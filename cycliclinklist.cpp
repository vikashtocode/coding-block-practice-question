
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node()
    {

    }
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
}; 
void InsertNodeAttail(Node* &head,int input)
{
       Node*newNode=new Node(input);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
  Node*ptr=head;
  while(ptr->next!=NULL)
  {
    ptr=ptr->next;
  }
  ptr->next=newNode;
};
// void printLinkedlist(Node* head)
// {
//     if(head==NULL){
//         cout<<"linked list is empty"<<endl;
//     }
//     Node*temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" "; 
//         temp=temp->next;
//      }
//      cout<<endl;
// }
map<Node*,bool>vis;
bool flag=0;
void check(Node*head)
{
    if(head==NULL)
     {
         flag=0;
         return;
     }
    if(vis[head]!=NULL)
    {
         vis[head]=true;
        check(head->next);
    } 
    else
    flag = 1;
    return;

}


int main() {
    Node*head =NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    int input;
    cin>>input;
    InsertNodeAttail(head,input);}
    // printLinkedlist(head);
    check(head);
    if(flag)
    cout<<" lopp is visted"<<endl;
    else cout<<"loop is not visted"<<endl;
  return 0;

}


#include <iostream>
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
void printLinkedlist(Node* head)
{
    if(head==NULL){
        cout<<"linked list is empty"<<endl;
    }
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" "; 
        temp=temp->next;
     }
     cout<<endl;
}
void ReverseLinkedList(Node*&head)
{
    Node*prev=NULL,*curr=head,*next1;
    while(curr!=NULL)
    {
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
    }
   head=prev;
}

int main() {
    Node*head =NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    int input;
    cin>>input;
    InsertNodeAttail(head,input);}
    printLinkedlist(head);
    ReverseLinkedList(head);
    printLinkedlist(head);

}

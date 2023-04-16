
//Double link lIST:
#include <iostream>
using namespace std;
class Node
{
public:
   int data;
   Node*next;
   Node*prev;
   Node()
   {

   }
   Node(int data)
   {
       this->data=data;
       this->next=NULL;
       this->prev=NULL;
  }
  };

  void InsertAtTail(Node* &head,Node*&tail,int ip)
  {
      Node *newNode=new Node(ip);
      if(head==NULL)
      {
          head=newNode;
          tail=head;
          return;
      }
      //otherwise
      tail->next=newNode;
      tail->next->prev=tail;
      tail=tail->next;
    }
    void print(Node*&head)
    {
        Node*ptr=head;
        while(ptr)//p!=NULL
        {
             cout<<ptr->data<<" ";
             ptr=ptr->next;
        }
        cout<<endl;
    }

void DeleteAttailNode(Node*&head,Node*&tail)
{
   if(head==tail)
   {
       head=NULL;
       tail=NULL;
       return;
   }
   //otherwise
   tail->prev->next=NULL;
   tail=tail->prev;
}


int main()
{
    Node*head=NULL,*tail=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ip;
        cin>>ip;
        InsertAtTail(head,tail,ip);
    }
    print(head);
     DeleteAttailNode(head,tail);
    print(head);
    DeleteAttailNode(head,tail);
    print(head);
}

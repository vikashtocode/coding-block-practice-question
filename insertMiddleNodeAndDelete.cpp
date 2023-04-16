#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    //constructor
    Node()
    {

    }
    Node (int data)
    {
       this->data=data;
       this->next=NULL;//null pointer
    }
};
void InsertNodeAtTail(Node* &head,int val)
{
    //create a node at heap memory
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        //Linked list is empty
        //no chain there
        head=newNode;
        return;
    }
    //go to last node i.e tail node 
    //initialize a ptr of node type
        Node *ptr=head;//ptr points to starting node of linked list 
        //go to last node 
        while(ptr->next!=NULL)
        {
            ptr =ptr->next;
        }
        //ptr points to tail node
        ptr->next=newNode;
}
void printList(Node *head)
{
    if(head==NULL)
    {
        //link list is empty
        cout<<"LikedList is empty"<<endl;
    }
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//fast and slow rule (fast)->2 steps at a time and (slow)->one step at a time for find middile node
Node* findMiddleNodeofll(Node*&head)
{
    Node *fast=head,*slow=head;
    while(fast->next && fast->next->next)
    {
        slow=slow->next;//take on jump at once
        fast=fast->next->next;//take 2 jumps at once 
    }
  return slow;
}
void InsertNodeAtMiddle(Node*&head,int val)
{  Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return ;    
    }
    Node*ptr=head;
    //ll size is 1
    if(ptr->next==NULL)
    {
        ptr->next=newNode;
        return;
    }
    //otherwise
    //find middleNode
    Node*middle=findMiddleNodeofll(head);
    Node *P1,*P2;
    P2=middle;
    P1=P2->next;
    //append now created node between p1 and p2
    P2->next=newNode;
    newNode->next=P1;
}
void DeleteAtMiddleNode(Node*&head)
{
    //ll is empty
    if(head==NULL)
    {
        cout<<"Linked list is empty"<<endl;
        return;
    }
    //ll size is of 1
    if(head->next==NULL)
    {
        head=NULL;
        return;
    }
    //otherwise
    Node*middle=findMiddleNodeofll(head);
    Node*ptr=head;
    while(ptr->next!=middle)
    {
        ptr=ptr->next;
    }
    //ptr->next points to middle Node
    ptr->next=middle->next;
} 

int main()
{
    Node *head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int input;
    cin>>input;
    InsertNodeAtTail(head,input);}
     printList(head);
    Node*middileNode=findMiddleNodeofll(head);
    cout<<"middileNode of link list is:"<<middileNode->data<<endl;
    InsertNodeAtMiddle(head,25);
       printList(head);
    DeleteAtMiddleNode(head);
      printList(head);
}




































































   

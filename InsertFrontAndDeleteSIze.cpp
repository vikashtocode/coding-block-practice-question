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
void deleteAtTail(Node *&head)
{
    if(head==NULL)
    {
        cout<<"linked list is empty"<<endl;
        return;
    }
    Node*ptr=head;
    //list is of size 1
    if(ptr->next==NULL)
    {
     //starting node next is null
     head=NULL;
     return;
    }
    while(ptr->next!=NULL && ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    //ptr points to second last elemnt
    ptr->next=NULL;
}
void InsertNodeAtFront(Node*&head,int val)
{
    Node *newNode=new Node(val);
    //if ll is emptty
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    //otherwise
    newNode->next=head;
    head=newNode;
}
void deleteAtFront(Node*&head)
{
    //ll is empty
    if(head==NULL)
    {
        cout<<"linked list is empty"<<endl;
        return;
    }
    Node *ptr=head;//ptr pints to first node
    if(ptr->next==NULL)
    {
        head=NULL;
        return;
    }
    //ll size>1
    //go to second node
    ptr=ptr->next;
    head=ptr;//head points to second node
    //i.e connection lose from first node
    //i.e first node is supposed to be deleted from linked list
}
int sizeofAll(Node *head)
{
    int cnt =0;
    Node *temp=head;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
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
    // printList(head);
    deleteAtTail(head);
    printList(head);
    InsertNodeAtFront(head,5);
    printList(head);
    deleteAtFront(head);
    printList(head);
    cout<<sizeofAll(head)<<endl;
}
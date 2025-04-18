#include<iostream>
using namespace std;//DOUBLY LINKED LIST INSERTION
class Node
{
    public:
    int data;
    Node *previous;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->previous=NULL;
        this->next=NULL;
    }
};
void InsertatHead(Node* &head,int d);
void InsertatTail(Node* &tail,int d);
void InsertatMiddle(Node* &head,Node* &tail,int position,int d);
void print(Node* &head);
int main()
{
    int n,data;
    cout<<"Enter the size of Linked List: ";
    cin>>n;
    cout<<"Enter the elements of Linked List:-"<<endl;
    cin>>data;
    Node *node1=new Node(data);
    Node *head=node1;
    Node *tail=node1;
    for(int i=0;i<n-1;i++)
    {
        cin>>data;
        InsertatTail(tail,data);
    }
    int position,d;
    cout<<"Enter Insertion Position: ";
    cin>>position;
    cout<<"Enter Data: ";
    cin>>d;
    InsertatMiddle(head,tail,position,d);
    // InsertatHead(head,d);
    cout<<"LINKED LIST:-"<<endl;
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    return 0;
}
void InsertatHead(Node* &head,int d)
{
    Node *temp=new Node(d);
    if(head==NULL)
    {
        head=temp;
        return;
    }
    else
    {
        temp->next=head;
        head->previous=temp;
        head=temp;
        head->previous=NULL;
        return;
    }
}
void InsertatMiddle(Node* &head,Node* &tail,int position,int d)
{
    Node *temp=head;
    int count=1;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }
    if(position==1)
    {
        InsertatHead(head,d);
        return;
    }
    if(temp->next==NULL)
    {
        InsertatTail(tail,d);
        return;
    }
    Node *newnode=new Node(d);
    newnode->next=temp->next;
    temp->next->previous=newnode;
    temp->next=newnode;
    newnode->previous=temp;
    return;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    if(tail==NULL)
    {
        tail=temp;
        return;
    }
    else
    {
        tail->next=temp;
        temp->previous=tail;
        tail=temp;
        return;
    }
}
void print(Node* &head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}
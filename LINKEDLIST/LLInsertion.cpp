#include<iostream>
using namespace std;
class Node
{
    public: 
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void InsertatHead(Node* &head,int d);
void InsertatTail(Node* &tail,int d);
void InsertatMiddle(Node* &head,Node* &tail,int position,int d);
void print(Node* &head);//we can write tail also;
int main()
{
    int n;
    cout<<"Enter size of Linked List: ";
    cin>>n;
    int data;
    cout<<"Enter Values:-"<<endl;
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
    cout<<"Enter data: ";
    cin>>d;
    InsertatMiddle(head,tail,position,d);
    //InsertatHead(head,d);
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
    }
    else
    {
        temp->next=head;//now new head is pointing to the next node
        head=temp;//updating head
    }
    return;
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
        return;//now we inserted our element , so we dont want to update head
    }
    else if(temp->next==NULL)
    {
        InsertatTail(tail,d);//now we inserted out element at tail , so we need to update tail thts why func called
        return;
    }
    Node *newnode=new Node(d);
    newnode->next=temp->next;
    temp->next=newnode;
    return;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    if(tail==NULL)
    {
        tail=temp;
    }
    else
    {
        tail->next=temp;//pointing to the address of new tail node data
        tail=temp;//updating tail
    }
    return;
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
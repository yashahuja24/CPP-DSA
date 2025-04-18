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
void InsertatTail(Node* &tail,int d);
void reversek(Node* &head,int k);
void print(Node *head);
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
    int k;
    cout<<"Enter K Position: ";
    cin>>k;
    cout<<"ORIGINAL LINKED LIST:-"<<endl;
    print(head);
    cout<<"REVERSED LINKED LIST AFTER K POSITIONS:-"<<endl;
    reversek(head,k);
    print(head);
    return 0;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void reversek(Node* &head,int k)
{
    Node *curr=head;
    if(head==NULL)
    {
        return;
    }
    int count=1;
    Node *p=NULL;
    while(count<k)
    {
        p=curr;
        curr=curr->next;
        count++;
    }
    Node *previous=NULL;
    Node *forward=NULL;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=previous;
        previous=curr;
        curr=forward;
    }
    if(k==1)
    {
        head=previous;
    }
    else
    {
        p->next=previous;
    }
}
void print(Node *head)
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
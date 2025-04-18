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
void print(Node *head);
bool hasEnoughodes(Node *head,int k);
Node *reversek(Node* &head,int k);
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
    cout<<"Enter the group size: ";
    cin>>k;
    cout<<"ORIGINAL LINKED LIST:-"<<endl;
    print(head);
    cout<<"REVERSED LINKED LIST:-"<<endl;
    head=reversek(head,k);
    print(head);
    return 0;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
    return;
}
bool hasEnoughodes(Node *head,int k)
{
    Node *curr=head;
    int c=0;
    while(curr!=NULL && c<k)
    {
        curr=curr->next;
        c++;
    }
    if(c==k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
Node* reversek(Node* &head,int k)
{
    if(!hasEnoughodes(head,k))
    {
        return head;
    }
    Node *curr=head;
    Node *prev=NULL;
    Node *forward=NULL;
    int count=0;
    while(curr!=NULL && count<k)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward!=NULL)
    {
        head->next=reversek(forward,k);
    }
    return prev;
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
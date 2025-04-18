#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *rnd;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->rnd=NULL;
    }
};
void InsertatTail(Node* &tail,int d);
void print(Node *head);
void Insert(Node* &head,Node* &tail,Node *temp);
void clone(Node *head,Node *tail);
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
    Node *temp=head;
    temp->rnd=head->next->next;
    temp=temp->next;
    temp->rnd=head;
    temp=temp->next;
    temp->rnd=temp;
    temp=temp->next;
    temp->rnd=head->next;
    temp=temp->next;
    temp->rnd=head->next->next->next;
    clone(head,tail);
    return 0;
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
        tail=temp;
        return;
    }
}
void clone(Node *head,Node *tail)
{
    Node *temp=head;
    Node *clone_head=NULL;
    Node *clone_tail=NULL;
    while(temp!=NULL)
    {
        Insert(clone_head,clone_tail,temp);
        temp=temp->next;
    }
    Node *originalNode=head;
    Node *cloneNode=clone_head;
    Node *Next=NULL;
    while(originalNode!=NULL && cloneNode!=NULL)
    {
        Next=originalNode->next;
        originalNode->next=cloneNode;
        originalNode=Next;

        Next=cloneNode->next;
        cloneNode->next=originalNode;
        cloneNode=Next;
    }
    Node *curr=head;
    while(curr!=NULL && curr->next!=NULL && curr->rnd!=NULL)
    {
        curr->next->rnd=curr->rnd->next;
        curr=curr->next->next;
    }
    originalNode=head;
    cloneNode=clone_head;
    while(originalNode!=NULL && cloneNode!=NULL)
    {
        originalNode->next=cloneNode->next;
        originalNode=originalNode->next;
        cloneNode->next=originalNode->next;
        cloneNode=cloneNode->next;
    }
    return;
}
void Insert(Node* &head,Node* &tail,Node *temp)
{
    if(head==NULL)
    {
        head=temp;
        tail=head;
        return;
    }
    else
    {
        tail->next=temp;
        tail=temp;
        return;
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
}
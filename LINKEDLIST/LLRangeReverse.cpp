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
        this->next= NULL;
    }
};
void InsertatTail(Node* &tail,int d);
void RangeRev(Node* &head,int n,int m);
void print(Node *head);
int main()
{
    int size,data;
    cout<<"Enter the size of Linked List: ";
    cin>>size;
    cout<<"Enter the elements of Linked List:-"<<endl;
    cin>>data;
    Node *node1=new Node(data);
    Node *head=node1;
    Node *tail=node1;
    for(int i=0;i<size-1;i++)
    {
        cin>>data;
        InsertatTail(tail,data);
    }
    int n,m;
    cout<<"Starting Reversal Position: ";
    cin>>n;
    cout<<"Ending Reversal Position: ";
    cin>>m;
    RangeRev(head,n,m);
    print(head);
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
    return;
}
void RangeRev(Node* &head,int n,int m)//Made by me
{
    Node *curr=head;
    Node *prev=NULL;
    Node *p=NULL;
    Node *forward=NULL;
    int cnt=1;
    while(cnt<n)
    {
        p=curr;
        curr=curr->next;
        cnt++;
    }
    Node *temp1=curr;
    cnt=0;
    int num=m-n+1;//how many times reverse takes place , eg start:2 end:4 , toh 3 baar reverse krna h toh 4-2+1;
    while(cnt<num)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        cnt++;
    }
    if(n==1)
    {
        head=prev;
    }
    else
    {
        p->next=prev;
    }
    temp1->next=curr;//continuing original LL , connecting n index to m ke baad wala node
    return;
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
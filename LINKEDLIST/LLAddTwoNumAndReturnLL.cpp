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
void print(Node *head);
void sum(Node *head1,Node *head2);
void Approach2(Node *head1,Node *head2);
void reverse(Node* &head);
void Insertion(Node* &head,Node* &tail,int d);
int main()
{
    int n1,n2,data;
    cout<<"Enter the size of First Linked List: ";
    cin>>n1;
    cout<<"Enter the elements of First Linked List:-"<<endl;
    cin>>data;
    Node *node1=new Node(data);
    Node *head1=node1;
    Node *tail1=node1;
    for(int i=0;i<n1-1;i++)
    {
        cin>>data;
        InsertatTail(tail1,data);
    }
    cout<<"Enter the size of Second Linked List: ";
    cin>>n2;
    cout<<"Enter the elements of Second Linked List:-"<<endl;
    cin>>data;
    Node *node2=new Node(data);
    Node *head2=node2;
    Node *tail2=node2;
    for(int i=0;i<n2-1;i++)
    {
        cin>>data;
        InsertatTail(tail2,data);
    }
    sum(head1,head2);
    Approach2(head1,head2);
    return 0;
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
        tail->next=temp;
        tail=temp;
    }
    return;
}
void sum(Node *head1,Node *head2)
{
    long int n1=0,n2=0;
    Node *head=NULL;
    while(head1!=NULL)
    {
        n1=n1*10+(head1->data);
        head1=head1->next;
    }
    while(head2!=NULL)
    {
        n2=n2*10+(head2->data);
        head2=head2->next;
    }
    long int n=n1+n2;
    while(n>0)
    {
        int r=n%10;
        InsertatHead(head,r);
        n/=10;
    }
    cout<<"ANSWER:"<<endl;
    print(head);
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
        temp->next=head;
        head=temp;
    }
    return;
}
void reverse(Node* &head)
{
    Node *curr=head;
    Node *prev=NULL;
    Node *forward=NULL;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
    return;
}
void Approach2(Node *head1,Node *head2)
{
    reverse(head1);
    reverse(head2);
    Node *anshead=NULL;
    Node *anstail=NULL;
    int carry=0;
    while(head1!=NULL || head2!=NULL || carry!=0)
    {
        int val1=0,val2=0;
        if(head1!=NULL)
        {
            val1=head1->data;
        }
        if(head2!=NULL)
        {
            val2=head2->data;
        }
        int sum=carry+val1+val2;
        int digit=sum%10;
        Insertion(anshead,anstail,digit);
        carry=sum/10;
        if(head1!=NULL)
        {
            head1=head1->next;
        }
        if(head2!=NULL)
        {
            head2=head2->next;
        }
    }
    reverse(anshead);
    cout<<"Answer:-"<<endl;
    print(anshead);
}
void Insertion(Node* &head,Node* &tail,int d)
{
    Node *temp=new Node(d);
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
    return;
}
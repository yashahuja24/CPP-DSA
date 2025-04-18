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
void sum(Node *head,Node *head1);
void print(Node *head);
int main()
{
    int n,data,num,d;
    cout<<"Enter the size of Linked List 1: ";
    cin>>n;
    cout<<"Enter the size of Linked List 2: ";
    cin>>num;
    cout<<"Enter the elements of Linked List 1:-"<<endl;
    cin>>data;
    Node *node1=new Node(data);
    Node *head=node1;
    Node *tail=node1;
    for(int i=0;i<n-1;i++)
    {
        cin>>data;
        InsertatTail(tail,data);
    }
    cout<<"Enter the elements of Linked List 2:-"<<endl;
    cin>>d;
    Node *node2=new Node(d);
    Node *head1=node2;
    Node *tail1=node2;
    for(int i=0;i<num-1;i++)
    {
        cin>>d;
        InsertatTail(tail1,d);
    }
    cout<<"LINKED LIST 1:-"<<endl;
    print(head);
    cout<<"LINKED LIST 2:-"<<endl;
    print(head1);
    sum(head,head1);
    return 0;
}
void InsertatTail(Node *&tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
    return;
}
void sum(Node *head,Node *head1)
{
    long int num1=0,num2=0;
    while(head!=NULL)
    {
        num1=num1*10+(head->data);
        head=head->next;
    }
    while(head1!=NULL)
    {
        num2=num2*10+(head1->data);
        head1=head1->next;
    }
    cout<<"LINKED LIST 1: "<<num1<<endl;
    cout<<"LINKED LIST 2: "<<num2<<endl;
    long int sum=num1+num2;
    cout<<"SUM OF 2 LINKED LIST: "<<sum<<endl;
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
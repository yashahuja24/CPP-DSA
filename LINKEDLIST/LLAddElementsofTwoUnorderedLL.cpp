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
void sum(Node *head,int n,Node *head1,int num);//this program adds , same position data not sum
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
    sum(head,n,head1,num);
    return 0;
}
void InsertatTail(Node *&tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
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
void sum(Node *head,int n,Node *head1,int num)
{
    Node *temp=head;
    Node *temp1=head1;
    if(num<n)
    {
        while(temp1!=NULL)
        {
            temp->data=temp->data+temp1->data;
            temp=temp->next;
            temp1=temp1->next;
        }
        cout<<"Updated Linked List:-"<<endl;
        print(head);
    }
    else
    {
        while(temp!=NULL)
        {
            temp1->data=temp->data+temp1->data;
            temp=temp->next;
            temp1=temp1->next;
        }
        cout<<"Updated Linked List:-"<<endl;
        print(head1);
    }
    return;
}
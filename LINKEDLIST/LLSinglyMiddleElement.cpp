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
void findMiddle1(Node *head,int n);
void findMiddle2(Node *head);
// int getLength(Node *head);//EXAMPLE PROGRAM TO GET LENGTH
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
    // int N=getLength(head);
    // cout<<N<<endl;
    cout<<"Middle Element by Approach 1: ";
    findMiddle1(head,n);
    cout<<"Middle Element by Approach 2: ";
    findMiddle2(head);
    return 0;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
    return;
}
void findMiddle1(Node *head,int n)
{
    Node *MiddleElement=head;
    int count=1;//Middle element starts from head
    while(count<n/2)
    {
        MiddleElement=MiddleElement->next;
        count++;
    }
    if(n%2==1)
    {
        MiddleElement=MiddleElement->next;
    }
    cout<<MiddleElement->data<<" "<<endl;
    return;
}
void findMiddle2(Node *head)
{
    Node *fast=head->next;
    Node *slow=head;
    if(head==NULL || head->next==NULL)
    {
        cout<<head->data<<endl;
        return;
    }
    while(fast!=NULL && fast->next!=NULL)//&& isiliye kyuki dono mei se koi true hua toh wo loop mei nhi enter hoga
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    Node *MiddleElement=slow;
    cout<<MiddleElement->data<<" "<<endl;
    return;
}
int getLength(Node *head)//EXAMPLE PROGRAM
{
    Node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
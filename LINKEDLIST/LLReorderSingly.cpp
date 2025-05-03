#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int item)
    {
        this->data=item;
        this->next=NULL;
    }
};
void InsertatTail(Node* &tail,int data);
Node *reverse(Node *head);
void reOrderList(Node *head);
void print(Node *head);
int main()//FirstElement->LastElement->SecondElement->SecondLastElement->ThirdElement->...
{
    int n;
    cout<<"Enter the size of Linked List: ";
    cin>>n;
    int data;
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
    reOrderList(head);
    cout<<"Re-Ordered Linked List:-"<<endl;
    print(head);
    return 0;
}
void InsertatTail(Node* &tail,int data)
{
    Node *temp=new Node(data);
    if(tail==NULL)
    {
        tail=temp;
        return;
    }
    tail->next=temp;
    tail=temp;
    return;
}
Node *reverse(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node *curr=head;
    Node *forward=NULL;
    Node *prev=NULL;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
void reOrderList(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return;
    }
    Node *slow=head;
    Node *fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Node *second=reverse(slow->next);
    slow->next=NULL;
    Node *first=head;
    while(second!=NULL)
    {
        Node *temp1=first->next;
        Node *temp2=second->next;
        first->next=second;
        second->next=temp1;
        first=temp1;
        second=temp2;
    }
    return;
}
void print(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}
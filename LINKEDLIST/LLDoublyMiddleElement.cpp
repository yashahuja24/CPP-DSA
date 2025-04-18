#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *previous;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->previous=NULL;
    }
};
void InsertatTail(Node* &tail,int d);
void findMiddle(Node *head,Node *tail);
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
    cout<<"Middle Element: ";
    findMiddle(head,tail);
    return 0;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    temp->previous=tail;
    tail=temp;
    return;
}
void findMiddle(Node *head,Node *tail)
{
    Node *MiddleElement=NULL;
    if(head==NULL || head->next==NULL)
    {
        return;
    }
    while(head!=tail && head->next!=tail)
    {
        head=head->next;
        tail=tail->previous;
        MiddleElement=head;
    }
    cout<<MiddleElement->data<<endl;
    return;
}
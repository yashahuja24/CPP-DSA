#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void InsertatHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;//updating next node
    head=temp;
    return;
}
void print(Node* &head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}
int main()
{
    Node *node1=new Node(5);
    Node *head=node1;
    cout<<"Enter size of Linked List: ";
    int data,n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cout<<"Enter Value: ";
        cin>>data;
        InsertatHead(head,data);
    }
    cout<<"LINKED LIST:-"<<endl;
    print(head);
    return 0;
}
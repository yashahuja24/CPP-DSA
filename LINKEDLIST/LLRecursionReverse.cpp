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
void reverse(Node* &head,Node *curr,Node *prev);
void print(Node* &head);
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
    cout<<"ORIGINAL LINKED LIST:-"<<endl;
    print(head);
    reverse(head,head,NULL);
    cout<<"Reversed Linked List:-"<<endl;
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
void reverse(Node* &head, Node *curr,Node *prev)
{
    if(curr==NULL)
    {
        head=prev;
        return;
    }
    else
    {
        if(head==NULL || head->next==NULL)
        {
            return;
        }
        else
        {
            Node *forward=curr->next;
            reverse(head,forward,curr);
            curr->next=prev;
        }
    }
}
void print(Node* &head)
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
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
void reverse(Node *head,Node *tail,int n);
void Approach2(Node* &head,Node* &tail);
void print(Node *head);
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
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    cout<<"REVERSED LINKED LIST:-"<<endl;
    reverse(head,tail,n);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    cout<<"REVERSED LINKED LIST BY APPROACH 2:-"<<endl;
    Approach2(head,tail);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
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
void reverse(Node *head,Node *tail,int n)
{
    if(head==NULL || head->next==NULL)
    {
        return;
    }
    else
    {
        Node *i=head;
        Node *j=tail;
        for(int k=0;k<n/2;k++)
        {
            swap(i->data,j->data);
            i=i->next;
            j=j->previous;
        }
        swap(head,tail);
        return;
    }
}
void Approach2(Node* &head,Node* &tail)
{
    if(head==NULL || head->next==NULL)
    {
        return;
    }
    else
    {
        Node *curr=head;
        Node *forward=NULL;
        Node *prev=NULL;
        tail=head;
        while(curr!=NULL)
        {
            forward=curr->next;
            curr->next=prev;
            curr->previous=forward;
            prev=curr;
            curr=forward;
        }
        head=prev;
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
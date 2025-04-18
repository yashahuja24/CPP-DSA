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
bool detectloop(Node *head);
Node* detecthead(Node* &head);
void print(Node *head);
int main()
{
    int n,data;
    cout<<"Enter the size or Linked List: ";
    cin>>n;
    cout<<"Enter the elements of Linked List:-"<<endl;
    cin>>data;
    Node *node1=new Node(data);
    Node *head=node1;
    Node *tail=node1;
    tail->next=node1;
    for(int i=0;i<n-1;i++)
    {
        cin>>data;
        InsertatTail(tail,data);
    }
    tail->next=head->next->next;
    if(detectloop(head))
    {
        cout<<"Loop is Detected"<<endl;
        Node *temp=detecthead(head);
        cout<<"Head of the Cycle is: "<<temp->data<<endl;
    }
    else
    {
        cout<<"Linked List is Linear"<<endl;
    }
    print(head);
    return 0;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    temp->next=tail->next;
    tail->next=temp;
    tail=temp;
    return;
}
bool detectloop(Node *head)
{
    if(head==NULL)
    {
        return 0;
    }
    Node *fast=head;
    Node *slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        {
            return 1;
        }
    }
    return 0;
}
Node* detecthead(Node* &head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node *fast=head;
    Node *slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        {
            break;
        }
    }
    slow=head;
    Node *p=NULL;
    while(slow!=fast)
    {
        p=fast;//p is equals to fast because fast is in the loop cycle , and we need to get the tail pointer.
        fast=fast->next;
        slow=slow->next;
    }
    p->next=NULL;//removing loop(jugadu tareeka)
    return slow;
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
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
    ~Node()
    {
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
    }
};
void InsertatTail(Node* &tail,int d);
void deletion(Node* &tail,int value);
void print(Node*tail);
int main()
{
    int n,data;
    cout<<"Enter size of Linked List: ";
    cin>>n;
    cout<<"Enter the elements of Linked List:-"<<endl;
    cin>>data;
    Node *node1=new Node(data);
    Node *tail=node1;
    tail->next=node1;
    for(int i=0;i<n-1;i++)
    {
        cin>>data;
        InsertatTail(tail,data);
    }
    int value;
    cout<<"Enter Deletion Value: ";
    cin>>value;
    deletion(tail,value);
    cout<<"LINKED LIST:-"<<endl;
    print(tail);
    return 0;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    if(tail==NULL)
    {
        tail=temp;
        tail->next=temp;
        return;
    }
    else
    {
        temp->next=tail->next;
        tail->next=temp;
        tail=temp;
        return;
    }
}
void deletion(Node* &tail,int value)
{
    Node *thtNode=tail->next;
    Node *previous=tail;
    while(thtNode->data!=value)
    {
        previous=thtNode;
        thtNode=thtNode->next;
    }
    if(thtNode==tail)
    {
        tail=previous;
    }
    previous->next=thtNode->next;
    thtNode->next=NULL;
    delete thtNode;
    return;
}
void print(Node *tail)
{
    Node *temp=tail->next;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while(temp!=tail->next);
    return;
}
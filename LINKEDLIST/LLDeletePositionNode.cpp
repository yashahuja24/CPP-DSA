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
void deletion(Node* &head,Node* &tail,int position);
void print(Node* &head);
int main()
{
    int n,data;
    cout<<"Enter the size of Linked List: ";
    cin>>n;
    cout<<"Enter elements of Linked List:-"<<endl;
    cin>>data;
    Node *node1=new Node(data);
    Node *head=node1;
    Node *tail=node1;
    for(int i=0;i<n-1;i++)
    {
        cin>>data;
        InsertatTail(tail,data);
    }
    int position;
    cout<<"Enter Deletion Position: ";
    cin>>position;
    deletion(head,tail,position);
    cout<<"LINKED LIST:-"<<endl;
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    return 0;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    if(tail==NULL)
    {
        tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
        return;
    }
}
void deletion(Node* &head,Node* &tail,int position)
{
    Node *thtNode=head;
    Node *previous=head;
    int count=1;
    while(count<position)
    {
        thtNode=thtNode->next;
        count++;
    }
    count=1;
    while(count<position-1)
    {
        previous=previous->next;
        count++;
    }
    if(position==1)//FOR HEAD NODE
    {
        head=head->next;
        thtNode->next=NULL;
        delete thtNode;
        return;
    }
    else if(thtNode->next==NULL)//FOR TAIL NODE
    {
        tail=previous;
        tail->next=NULL;
        thtNode->next=NULL;
        delete thtNode;
        return;
    }
    previous->next=thtNode->next;//FOR MIDDLE NODE
    thtNode->next=NULL;
    delete thtNode;
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
    cout<<endl;
    return;
}
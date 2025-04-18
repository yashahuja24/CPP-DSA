#include<iostream>
using namespace std;//BY ME WITHOUT WATCHING OR LEARNING
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
    cout<<"Enter size of Linked List: ";
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
    cout<<"Enter deletion Position: ";
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
        temp->previous=tail;
        tail=temp;
    }
    return;
}
void deletion(Node* &head,Node* &tail,int position)
{
    Node *thtNode=head;
    int count=1;
    while(count<position)
    {
        thtNode=thtNode->next;
        count++;
    }
    if(position==1)//FOR HEAD
    {
        head=head->next;
        head->previous=NULL;
        thtNode->next=NULL;
        delete thtNode;
        return;
    }
    else if(thtNode->next==NULL)//FOR TAIL
    {
        tail=tail->previous;
        tail->next=NULL;
        thtNode->next=NULL;
        delete thtNode;
        return;
    }
    thtNode->previous->next=thtNode->next;//FOR MIDDLE NODE
    thtNode->next->previous=thtNode->previous;
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
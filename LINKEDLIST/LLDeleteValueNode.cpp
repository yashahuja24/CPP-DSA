#include<iostream>
using namespace std;//BY ME , WITHOUT WATCHING OR LEARNING FROM ANYWHERE
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
void print(Node* &head);
void deletion(Node* &head,Node* &tail,int value);
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
    int value;
    cout<<"Enter Value to be deleted: ";
    cin>>value;
    deletion(head,tail,value);
    cout<<"LINKED LIST:-"<<endl;
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
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
void deletion(Node* &head,Node* &tail,int value)
{
    Node *thtNode=head;
    int count=1;
    while(thtNode->data!=value)
    {
        thtNode=thtNode->next;
        count++;
    }
    int position=count;
    Node *previous=head;
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
        thtNode->next=NULL;
        delete thtNode;
        tail->next=NULL;
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
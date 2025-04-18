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
void deletion(Node* &head,Node* &tail,int value);
void print(Node* &head);
int main()
{
    int n,data;
    cout<<"Enter the elements of Liked List: ";
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
    cout<<"Enter Deletion Value: ";
    cin>>value;
    deletion(head,tail,value);
    cout<<"LINKED LIST:-"<<endl;
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    return 0;
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
    if(position==1)//FOR HEAD NODE
    {
        head=head->next;
        head->previous=NULL;//Pointing head ka previous to NULL
        thtNode->next=NULL;
        delete thtNode;
        return;
    }
    else if(thtNode->next==NULL)//FOR TAIL NODE
    {
        tail=tail->previous;
        tail->next=NULL;//Pointing tail to NULL
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
        return;
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
#include<iostream>
using namespace std;//code is written by me
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
void print(Node *head);
void Rotate(Node* &head,Node* &tail,int size,int k);
int main()
{
    int n;
    cout<<"Enter the size of Linked List: ";
    cin>>n;
    int data;
    cout<<"Enter the Elements of Linked List:-"<<endl;
    cin>>data;
    Node *node1=new Node(data);
    Node *head=node1;
    Node *tail=node1;
    for(int i=0;i<n-1;i++)
    {
        cin>>data;
        InsertatTail(tail,data);
    }
    int k;
    cout<<"Enter Value of Rotation: ";
    cin>>k;
    Rotate(head,tail,n,k);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    print(head);
    return 0;
}
void InsertatTail(Node* &tail,int d)
{
    if(tail==NULL)
    {
        return;
    }
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
    return;
}
void Rotate(Node* &head,Node* &tail,int size,int k)
{
    if(head==NULL || k==0 || k==size)//already sorted hai agr inn teeno mei se koi condition true hai toh
    {
        return;
    }
    while(k>size)//agr size 5 hai and rotate 6 times krna hai toh 1 barr ho gya , kyuki 5 times ke baad toh same hogi
    {
        k=k-size;
    }
    tail->next=head;//to make it circular just to rotate (well no use becz k bda hota hi hum size se minus krte hai);
    int count=0;
    Node *prev;
    while(count<(size-k))//logic is here (count<(size-k))
    {
        prev=head;
        head=head->next;
        count++;
    }
    tail=prev;
    tail->next=NULL;
    return;
}
void print(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}
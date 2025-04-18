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
void print(Node* tail);
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
        tail->next=tail;
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
void print(Node* tail)
{
    Node *temp=tail->next;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while(temp!=tail->next);
    cout<<endl;
    return;
}
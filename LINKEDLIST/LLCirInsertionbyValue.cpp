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
void InsertatPosition(Node* &tail,int element,int d);
void print(Node* tail);
int main()
{
    int data,element;
    cout<<"Enter the element of Linked List: ";
    cin>>data;
    cout<<"Enter Insertion after which element: ";
    cin>>element;
    Node *node1=new Node(data);
    Node *tail=node1;
    tail->next=node1;
    InsertatPosition(tail,element,data);
    print(tail);
    InsertatPosition(tail,element,3);
    print(tail);
    InsertatPosition(tail,3,4);
    print(tail);
    InsertatPosition(tail,element,2);
    print(tail);
    InsertatPosition(tail,4,5);
    print(tail);
    return 0;
}
void InsertatPosition(Node* &tail,int element,int d)
{
    if(tail==NULL)
    {
        Node *temp=new Node(d);
        tail=temp;
        tail->next=tail;
        return;
    }
    else
    {
        Node *temp=tail;
        while(temp->data!=element)
        {
            temp=temp->next;
        }
        Node *newnode=new Node(d);
        newnode->next=temp->next;
        temp->next=newnode;
        return;
    }
}
void print(Node* tail)
{
    Node *temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail->next!=temp);
    cout<<endl;
    return;
}
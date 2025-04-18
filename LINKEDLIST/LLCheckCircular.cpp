#include<iostream>
#include<map>
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
bool check(Node *head,int n);//comment line 64 and 29 to check if wanna see non circular
bool check1(Node *head);
bool check2(Node *head);
bool check3(Node *head);
// Another method check in Floyd's Cycle
int main()
{
    int n,data;
    cout<<"Enter the size of Linked List: ";
    cin>>n;
    cout<<"Enter the elements fo Linked List:-"<<endl;
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
    if(check(head,n))
    {
        cout<<"Circular Linked List"<<endl;
    }
    else
    {
        cout<<"Linked List is Not Circular"<<endl;
    }
    if(check1(head))
    {
        cout<<"Circular Linked List"<<endl;
    }
    else
    {
        cout<<"Linked List is Not Circular"<<endl;
    }
    if(check2(head))
    {
        cout<<"Circular Linked List"<<endl;
    }
    else
    {
        cout<<"Linked List is Not Circular"<<endl;
    }
    if(check3(head))
    {
        cout<<"Circular Linked List"<<endl;
    }
    else
    {
        cout<<"Linked List is Not Circular"<<endl;
    }
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
bool check(Node *head,int n)
{
    Node *temp=head;
    int count=0;
    if(head==NULL)
    {
        return true;
    }
    while(count<n)
    {
        if(temp->next==head)
        {
            return true;//we can write 1 also
        }
        temp=temp->next;
        count++;
    }
    return false;//we can write 0 also
}
bool check1(Node *head)
{
    Node *temp=head->next;
    if(head==NULL)
    {
        return true;
    }
    while(temp!=NULL && temp!=head)
    {
        if(temp==NULL)
        {
            return 0;
        }
        else if(temp->next==head)
        {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
bool check2(Node *head)//Time Complexity  O(n)
{
    Node *temp=head;
    map<Node*,bool>visited;
    while(temp!=NULL)
    {
        if(visited[temp]==true)
        {
            return 1;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return 0;
}
bool check3(Node *head)
{
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
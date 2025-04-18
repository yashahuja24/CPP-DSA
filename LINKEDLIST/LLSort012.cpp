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
void print(Node *head);
void sort(Node *head);
void Insertion(Node* &head,Node* &tail,int d);
void Approach2(Node *head);
void Approach3(Node* &head);
int main()
{
    int n,data;
    cout<<"Enter the size of Linked List: ";
    cin>>n;
    cout<<"Enter the elements of Linked List:-"<<endl;
    cin>>data;
    Node *node1=new Node(data);
    Node *head=node1;
    Node *tail=node1;
    for(int i=0;i<n-1;i++)
    {
        cin>>data;
        InsertatTail(tail,data);
    }
    // sort(head);// Time Complexity O(n^2);
    // Approach2(head);// Time Complexity O(n);
    Approach3(head);// Time Complexity O(n)  Space Complexity O(n);
    cout<<"SORTED LINKED LIST:-"<<endl;
    print(head);
    return 0;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
    return;
}
void sort(Node *head)
{
    Node *curr=head;
    Node *temp=NULL;
    while(curr->next!=NULL)
    {
        temp=curr->next;
        while(temp!=NULL)
        {
            if(temp->data<curr->data)
            {
                swap(temp->data,curr->data);
            }
            temp=temp->next;
        }
        curr=curr->next;
    }
}
void Approach2(Node *head)//count 0 1 and 2 and put data accordingly
{
    int zeroCount=0,oneCount=0,twoCount=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            zeroCount++;
        }
        else if(temp->data==1)
        {
            oneCount++;
        }
        else if(temp->data==2)
        {
            twoCount++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        if(zeroCount>0)// we can also write if(zeroCount!=0)
        {
            temp->data=0;
            zeroCount--;
        }
        else if(oneCount>0)
        {
            temp->data=1;
            oneCount--;
        }
        else if(twoCount>0)
        {
            temp->data=2;
            twoCount--;
        }
        temp=temp->next;
    }
}
void Approach3(Node* &head)
{
    Node *zerohead=NULL;
    Node *zerotail=zerohead;
    Node *onehead=NULL;
    Node *onetail=onehead;
    Node *twohead=NULL;
    Node *twotail=twohead;
    Node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            Insertion(zerohead,zerotail,0);
        }
        else if(temp->data==1)
        {
            Insertion(onehead,onetail,1);
        }
        else if(temp->data==2)
        {
            Insertion(twohead,twotail,2);
        }
        temp=temp->next;
    }
    if(zerohead!=NULL)
    {
        head=zerohead;
    }
    else if(zerohead==NULL)
    {
        head=onehead;
    }
    if(onehead!=NULL)
    {
        zerotail->next=onehead;
        onetail->next=twohead;
    }
    else
    {
        if(twohead!=NULL)
        {
            zerotail->next=twohead;
        }
    }
}
void Insertion(Node* &head,Node* &tail,int d)
{
    Node *temp=new Node(d);
    if(head==NULL)
    {
        head=temp;
        tail=head;
    }
    else
    {
        tail->next=temp;
        tail=temp;
        return;
    }
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
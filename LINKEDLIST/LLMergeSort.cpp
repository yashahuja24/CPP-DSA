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
Node* mergesort(Node *head);//Time Complexity O(n*log(n))
Node* merge(Node *head1,Node *head2);
void Insertion(Node* &head,Node* &tail,Node *temp);
Node* findmiddle(Node *head);
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
    head=mergesort(head);
    cout<<"Sorted Linked List:-"<<endl;
    print(head);
    return 0;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    if(tail==NULL)
    {
        tail=temp;
        return;
    }
    else
    {
        tail->next=temp;
        tail=temp;
        return;
    }
}
Node *findmiddle(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node *fast=head;
    Node *slow=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node *mergesort(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node *mid=findmiddle(head);
    Node *left=head;
    Node *right=mid->next;
    mid->next=NULL;
    left=mergesort(left);
    right=mergesort(right);
    Node *ans=merge(left,right);
    return ans;
}
Node* merge(Node *head1,Node *head2)
{
    Node *head=NULL;
    Node *tail=NULL;
    if(head1==NULL)//checking if either of the linked list is NULL
    {
        return head2;
    }
    else if(head2==NULL)
    {
        return head1;
    }
    while(head1!=NULL && head2!=NULL)//merging two sorted LL
    {
        if((head1->data)<=(head2->data))
        {
            Insertion(head,tail,head1);
            head1=head1->next;
        }
        else if((head2->data)<(head1->data))
        {
            Insertion(head,tail,head2);
            head2=head2->next;
        }
    }
    while(head1!=NULL)
    {
        Insertion(head,tail,head1);
        head1=head1->next;
    }
    while(head2!=NULL)
    {
        Insertion(head,tail,head2);
        head2=head2->next;
    }
    return head;
}
void Insertion(Node* &head,Node* &tail,Node *temp)
{
    if(head==NULL)
    {
        head=temp;
        tail=head;
        return;
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
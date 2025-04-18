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
void Insertion(Node* &head,Node* &tail,Node *temp);
Node* merge(Node *head1,Node *head2);
void print(Node *head);
int main()
{
    int n1,n2,data;
    cout<<"Enter the size of First Linked List: ";
    cin>>n1;
    cout<<"Enter the size of Second Linked List: ";
    cin>>n2;
    cout<<"Enter the elements of First Linked List:-"<<endl;
    cin>>data;
    Node *node1=new Node(data);
    Node *head1=node1;
    Node *tail1=node1;
    for(int i=0;i<n1-1;i++)
    {
        cin>>data;
        InsertatTail(tail1,data);
    }
    cout<<"Enter the elements of Second Linked List:-"<<endl;
    cin>>data;
    Node *node2=new Node(data);
    Node *head2=node2;
    Node *tail2=node2;
    for(int i=0;i<n2-1;i++)
    {
        cin>>data;
        InsertatTail(tail2,data);
    }
    Node *head=NULL;//answer head;
    head=merge(head1,head2);
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
Node* merge(Node *head1,Node *head2)
{
    Node *head=NULL;
    Node *tail=NULL;
    if(head1==NULL)//checking if either of the linked list is NULL
    {
        head=head2;
    }
    else if(head2==NULL)
    {
        head=head1;
    }
    while(head1!=NULL && head2!=NULL)//merging sorted LL
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
    cout<<"Merge Sorted Linked List:-"<<endl;
    return head;//returning answer head to main function 
}
void Insertion(Node* &head,Node* &tail,Node *temp)
{
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
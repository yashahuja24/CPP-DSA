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
void RemoveSortedD(Node* head);
void RemoveUnsortedD(Node* head);
void Approach2Unsorted(Node *head);
//Approach 3 for Unsorted LL will be sort the LL first and  use the func: void RemoveSortedD(Node* head);
void print(Node *head);
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
    RemoveSortedD(head);//USE THIS CDED IF U WANT TO RUN SORTED LINKED LIST CODE
    cout<<"Non Duplicated Sorted Linked List:-"<<endl;
    print(head);
    cout<<"Non Dulicated Unsorted Linked List:-"<<endl;
    RemoveUnsortedD(head);
    print(head);
    // cout<<"Non Dulicated Unsorted Linked List Using Approach 2:-"<<endl;
    // Approach2Unsorted(head);
    // print(head);
    return 0;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
    return;
}
void RemoveSortedD(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    Node *curr=head;
    while(curr->next!=NULL)
    {
        if(curr->data == curr->next->data)
        {
            Node *todelete=curr->next;
            Node *next_next=curr->next->next;
            delete todelete;
            curr->next=next_next;
        }
        else
        {
            curr=curr->next;
        }
    }
    return;
}
void RemoveUnsortedD(Node *head)//approach 1 for unsorted LL which does work only after removing sorted elements
{
    if(head==NULL)
    {
        return;
    }
    Node *i=head;
    Node *j=head;
    Node *prev=NULL;
    while(i!=NULL)
    {
        prev=i;
        j=i->next;
        while(j!=NULL)
        {
            if(i->data==j->data)
            {
                Node *tobedeleted=j;
                Node *next_next=j->next;
                delete tobedeleted;
                prev->next=next_next;
            }
            prev=j;
            j=j->next;
        }
        i=i->next;
    }
    return;
}
void Approach2Unsorted(Node *head)//approach 2 for unsorted LL which dosent work
{
    Node *temp=head;
    Node *prev=NULL;
    map<int,bool>visited;
    while(temp!=NULL)
    {
        if(visited[temp->data]==true)
        {
            prev->next=temp->next;
            cout<<temp->data;
        }
        visited[temp->data]=true;
        prev=temp;
        temp=temp->next;
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
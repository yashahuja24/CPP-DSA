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
};
void InsertatTail(Node* &tail,int d);
bool checkPalindrome(Node *head,Node *tail,int n);
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
    if(checkPalindrome(head,tail,n))
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    temp->previous=tail;
    tail=temp;
    return;
}
bool checkPalindrome(Node *head,Node *tail,int n)
{
    for(int i=0;i<n/2;i++)
    {
        if(head->data!=tail->data)
        {
            return 0;
        }
        head=head->next;
        tail=tail->previous;
    }
    return 1;
}
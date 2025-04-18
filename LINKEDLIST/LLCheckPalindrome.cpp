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
bool checkPalindrome(Node *head,int n);
bool Approach2(Node *head);
void reverse(Node* &head);
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
    if(checkPalindrome(head,n))
    {
        cout<<"Given Linked List is Palindrome"<<endl;
    }
    else
    {
        cout<<"Given Linked List is Not Palindrome"<<endl;
    }
    if(Approach2(head))
    {
        cout<<"Given Linked List is Palindrome"<<endl;
    }
    else
    {
        cout<<"Given Linked List is Not Palindrome"<<endl;
    }
    return 0;
}
void InsertatTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
    return;
}
bool checkPalindrome(Node *head,int n)//putting values in array and checking palindrome
{
    int *arr{new int[n]},i=0,j;
    Node *temp=head;
    while(temp!=NULL)
    {
        arr[i++]=temp->data;
        temp=temp->next;
    }
    i=0,j=n-1;
    while(i<=j)
    {
        if(arr[i]!=arr[j])
        {
            return 0;
        }
        else
        {
            i++;
            j--;
        }
    }
    return 1;
}
void reverse(Node* &head)
{
    Node *curr=head;
    Node *forward=NULL;
    Node *prev=NULL;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
    return;
}
bool Approach2(Node *head)
{
    Node *fast=head;
    Node *slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    Node *middle=slow;
    reverse(middle);//reversing middle and traversing from middle and starting and comparing values
    while(middle!=NULL)
    {
        if(head->data!=middle->data)
        {
            return 0;
        }
        head=head->next;
        middle=middle->next;
    }
    return 1;
}
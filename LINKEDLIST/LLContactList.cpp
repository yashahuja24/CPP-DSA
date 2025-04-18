#include<iostream>
#include<string.h>
using namespace std;
class Node
{
    public:
    string name;
    long int number;
    Node *next;
    Node(string name,long int number)
    {
        this->name=name;
        this->number=number;
        this->next=NULL;
    }
};
void InsertatTail(Node* &tail,string name,long int number);
void check(Node *head,string name);
void print(Node *head);//kaam ka nhi but rkh lete hai
int main()
{
    int n;
    string name;
    long long int number;
    cout<<"Enter the Size of Contact List: ";
    cin>>n;
    cout<<"Enter the 1 Contact Name: ";
    cin.ignore();//getline function ko theek krta hai optimises the error
    getline(cin,name);
    cout<<"Enter the 1 Contact Phone Number: ";
    cin>>number;
    Node *node1=new Node(name,number);
    Node *head=node1;
    Node *tail=node1;
    for(int i=0;i<n-1;i++)
    {
        cout<<"Enter "<<i+2<<" Contact Name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter "<<i+2<<" Contact Phone Number: ";
        cin>>number;
        InsertatTail(tail,name,number);
    }
    string contact_search;
    cout<<"Enter contact Search:-"<<endl;
    cin.ignore();//getline function ko theek krta hai
    getline(cin,contact_search);
    check(head,contact_search);
    return 0;
}
void InsertatTail(Node* &tail,string name,long int number)
{
    Node *temp=new Node(name,number);
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
void check(Node *head,string name)//made by me
{
    if(head==NULL)
    {
        cout<<"Contact List is Empty"<<endl;
        return;
    }
    else
    {
        Node *temp=head;
        int count=0;
        while(temp!=NULL)
        {
            int j=0;
            for(int i=0;temp->name[i]!='\0';i++)
            {
                if(name[j]==temp->name[i])
                {
                    j++;
                }
                else if(j==name.length())
                {
                    break;
                }
                else
                {
                    j=0;//start comparing again
                }
            }
            if(j==name.length())
            {
                count=1;
                cout<<"Name: "<<temp->name<<endl<<"Number: "<<temp->number<<endl<<endl;
            }
            temp=temp->next;
        }
        if(count==0)
        {
            cout<<"No related search Found!"<<endl;
        }
        return;
    }
}
void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<"Name: "<<temp->name<<endl<<"Number: "<<temp->number<<endl<<endl;
        temp=temp->next;
    }
    cout<<endl;
    return;
}
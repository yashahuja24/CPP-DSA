#include<iostream>
using namespace std;
class Stack
{
    public:
    int data;
    Stack *next;
    Stack *top;
    Stack()
    {
        this->next=NULL;
        this->top=NULL;
    }
    bool isEmpty()
    {
        return top==NULL;
    }
    void push(int item)
    {
        Stack *temp=new Stack();
        temp->data=item;
        if(isEmpty())
        {
            top=temp;
            return;
        }
        else
        {
            temp->next=top;//Inserting at Head
            top=temp;
            return;
        }
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else
        {
            top=top->next;
        }
    }
    void peek()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        
        else
        {
            cout<<top->data<<endl; 
        }
    }
    void display()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else
        {
            Stack *temp=top;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
            return;
        }
    }
    void size()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else
        {
            Stack *temp=top;
            int count=0;
            while(temp!=NULL)
            {
                count++;
                temp=temp->next;
            }
            cout<<count<<endl;
            return;
        }
    }
};
int main()
{
    Stack *s=new Stack();
    s->push(5);
    s->push(4);
    s->push(3);
    s->push(2);
    s->push(1);
    s->push(0);
    s->peek();
    s->pop();
    s->display();
    s->size();
    return 0;
}
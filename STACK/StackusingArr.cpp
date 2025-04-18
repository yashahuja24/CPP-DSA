#include<iostream>
using namespace std;
class Stack
{
    public:
    int size;
    int *stack;
    int top;
    bool isFull()
    {
        return top==size-1;
    }
    bool isEmpty()
    {
        return top==-1;
    }
    Stack(int size)
    {
        this->size=size;
        stack=new int[size];
        this->top=-1;
    }
    void push(int item)
    {
        if(isFull())
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else
        {
            stack[++top]=item;
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
            top--;
            return;
        }
    }
    void Size()
    {
        cout<<size<<endl;
        return;
    }
    void peek()
    {
        cout<<stack[top]<<endl;
        return;
    }
    void display()
    {
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
        return;
    }
};
int main()
{
    int n;
    cout<<"Enter the size of Stack: ";
    cin>>n;
    Stack s(n);
    s.push(1);
    s.peek();
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();
    s.pop();
    s.push(4);
    s.push(5);
    s.display();
    s.push(6);
    s.peek();//also known as s.top();
    s.Size();//gives size of Stack;
    return 0;
}
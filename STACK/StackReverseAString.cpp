#include<iostream>
#include<string>
#include<stack>
using namespace std;
class Stack
{
    public:
    int top;
    int size;
    char *stack;
    Stack(int size)
    {
        this->size=size;
        stack=new char[size];
        this->top=-1;
    }
    bool isFull()
    {
        return top==size-1;
    }
    bool isEmpty()
    {
        return top==-1;
    }
    void push(char ch)
    {
        if(isFull())
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            stack[++top]=ch;
        }
        return;
    }
    char pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            char ch=stack[top--];
            return ch;
        }
        return '\0';
    }
};
void UsingSTL();
int main()
{
    string str;
    cout<<"Enter string:-"<<endl;
    getline(cin,str);
    int size=str.length();
    Stack s(size);
    for(int i=0;str[i]!='\0';i++)// we can also write i<size
    {
        s.push(str[i]);
    }
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]=s.pop();
    }
    cout<<str<<endl;
    cout<<"USING STL:-"<<endl;
    UsingSTL();
    return 0;
}
void UsingSTL()
{
    stack<char>s;
    string str;
    cout<<"Enter String:-"<<endl;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        s.push(str[i]);
    }
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]=s.top();
        s.pop();
    }
    cout<<str<<endl;
    return;
}
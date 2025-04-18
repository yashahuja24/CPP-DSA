#include<iostream>
#include<stack>
#include<climits>
using namespace std;//Time Complexity O(1) & Space Complexity O(1)
class Stack
{
    public:
    int size;
    stack<int>s;
    int val;
    int mini=INT_MAX;
    Stack(int size)
    {
        this->size=size;
    }
    int push(int d)
    {
        if(s.size()==size)//Stack Overload
        {
            cout<<"Stack Overflow"<<endl;
            return mini;
        }
        else if(s.empty())//Stack is Empty
        {
            s.push(d);
            mini=d;
            return mini;
        }
        else if(d<mini)//New Minimum Element has Arrived
        {
            val=2*d-mini;//we are subtracting the prev mini element and now updating the new miniumum element
            s.push(val);
            mini=d;//Now mini becomes d;
            return mini;
        }
        else//Normal Push becz its larger than the minimim element
        {
            s.push(d);
            return mini;
        }
    }
    int pop()
    {
        int d=s.top();
        if(s.empty())//Stack Underflow
        {
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        else if(d>mini)//If greater, we normally pushed so we can pop it 
        {
            s.pop();
            return mini;
        }
        else//Now if its less then mini,pushed value(d)=2*curr-mini,now we are updating mini as 2*mini-(2*mini-prevmin)=prevmin
        {
            val=2*mini-d;
            mini=val;
            s.pop();
            return mini; 
        }
    }
    int peek()
    {
        return s.top();
    }
};
int main()
{
    int n;
    cout<<"Enter the size of Stack: ";
    cin>>n;
    Stack s(n);//n is size
    cout<<s.push(5)<<endl;//5
    cout<<s.push(3)<<endl;//3
    cout<<s.push(8)<<endl;//3
    cout<<s.push(2)<<endl;//2
    cout<<s.push(7)<<endl;//2
    cout<<s.pop()<<endl;//2
    cout<<s.pop()<<endl;//3
    cout<<s.pop()<<endl;//3
    return 0;
}
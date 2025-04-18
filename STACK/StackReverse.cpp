#include<iostream>
#include<stack>
using namespace std;
void reverse(stack<int>&s);//TIME COMPLEXITY O(n^2);
void InsertAtBottom(stack<int>&s,int element);
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reverse(s);
    int size=s.size();
    cout<<"Reversed Stack:-"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
void InsertAtBottom(stack<int>&s,int element)
{
    if(s.empty())
    {
        s.push(element);
        return;
    }
    int num=s.top();
    s.pop();
    InsertAtBottom(s,element);
    s.push(num);
}
void reverse(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int element=s.top();
    s.pop();
    reverse(s);
    InsertAtBottom(s,element);
}
#include<iostream>
#include<stack>
using namespace std;
void Insert(stack<int>&s,int element);
int main()
{
    stack<int>s;
    s.push(7);
    s.push(1);
    s.push(4);
    s.push(5);
    int element;
    cout<<"Enter Element at Bottom: ";
    cin>>element;
    Insert(s,element);
    int size=s.size();
    for(int i=0;i<size;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
void Insert(stack<int>&s,int element)//refernce tsack becz we are cmaking changes in original stack
{
    if(s.empty())
    {
        s.push(element);
        return;
    }
    int num=s.top();
    s.pop();
    Insert(s,element);
    s.push(num);
}
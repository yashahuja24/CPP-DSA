#include<iostream>
#include<stack>
using namespace std;
void Sort(stack<int>&s);//Lowest Element at Bottom(sbse chota sbse neeche)
void SortedInsert(stack<int>&s,int element);//TIME COMPLEXITY O(n^2)
int main()
{
    stack<int>s;
    s.push(7);
    s.push(6);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    Sort(s);
    int size=s.size();
    cout<<"Sorted Stack:-"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
void Sort(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int num=s.top();
    s.pop();
    Sort(s);
    SortedInsert(s,num);
}
void SortedInsert(stack<int>&s,int element)
{
    if(s.empty() || (s.top()<element))//the smallest element is at top
    {
        s.push(element);
        return;
    }
    int num=s.top();
    s.pop();
    SortedInsert(s,element);
    s.push(num);
    return;
}
#include<iostream>
#include<stack>
using namespace std;
void deleteEnd(stack<int>&s,int size,int count);
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    int size=s.size();
    deleteEnd(s,size,0);
    cout<<"Display:-"<<endl;
    size=s.size();
    for(int i=0;i<size;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
void deleteEnd(stack<int>&s,int size,int count)
{
    if(count==size-1)
    {
        s.pop();
        return;
    }
    int num=s.top();
    s.pop();
    deleteEnd(s,size,count+1);
    s.push(num);
}
#include<iostream>
#include<stack>
using namespace std;
void InsertatMiddle(stack<int>&s,int size,int count,int element);
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int count=0,element;
    int size=s.size();
    cout<<"Enter Element: ";
    cin>>element;
    InsertatMiddle(s,size,count,element);
    int n=s.size();//updated size
    for(int i=0;i<n;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}
void InsertatMiddle(stack<int>&s,int size,int count,int element)
{
    if(count==size/2)
    {
        s.push(element);
        return;
    }
    int num=s.top();
    s.pop();
    InsertatMiddle(s,size,count+1,element);
    s.push(num);
}
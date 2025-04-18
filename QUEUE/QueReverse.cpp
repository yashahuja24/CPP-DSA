#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void Qreversal(queue<int>&q);
int main()
{
    int n;
    cout<<"Enter the size of Queue: ";
    cin>>n;
    queue<int>q;
    cout<<"Enter the elements of Queue:-"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    Qreversal(q);
    cout<<"Reverse of entered Queue is:-"<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
void Qreversal(queue<int>&q)
{
    int n=q.size();
    stack<int>s;
    while(!q.empty())
    {
        int val=q.front();
        s.push(val);
        q.pop();
    }
    while(!s.empty())
    {
        int val=s.top();
        q.push(val);
        s.pop();
    }
    return;
}
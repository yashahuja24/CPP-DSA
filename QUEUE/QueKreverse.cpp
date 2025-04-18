#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void Qreversal(queue<int>&q,int k);
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
    int k;
    cout<<"Enter the reversal number: ";
    cin>>k;
    Qreversal(q,k);
    cout<<"Reverse of entered Queue is:-"<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
void Qreversal(queue<int>&q,int k)
{
    if(q.size()<=1)
    {
        return;
    }
    stack<int>s;
    int n=q.size();
    for(int i=0;i<k;i++)
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
    for(int i=0;i<n-k;i++)
    {
        int val=q.front();
        q.pop();
        q.push(val);
    }
    return;
}
#include<iostream>
#include<queue>
using namespace std;
void FirstNve(int *arr,int n,int k);
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the Window Size: ";
    cin>>k;
    FirstNve(arr,n,k);
    return 0;
}
void FirstNve(int *arr,int n,int k)
{
    vector<int>ans;
    queue<int>q;
    for(int i=0;i<k;i++)//processing 1st Window
    {
        if(arr[i]<0)//adding the index if it stores negative integer
        {
            q.push(i);
        }
    }
    if(q.size()>0)
    {
        ans.push_back(arr[q.front()]);
    }
    else
    {
        ans.push_back(0);
    }
    for(int i=k;i<n;i++)//processing rest of the windows
    {
        if(!q.empty() && i-q.front()>=k)//checking if the answer is in the window
        {
            q.pop();
        }
        if(arr[i]<0)//adding the index if it stores negative integer
        {
            q.push(i);
        }
        if(q.size()>0)//agr queue empty nahi hai toh front wala answer humara hai
        {
            ans.push_back(arr[q.front()]);
        }
        else//empty queue hai matlb koi -ve num nahi hai toh enter 0
        {
            ans.push_back(0);
        }
    }
    cout<<"Answer:-"<<endl;
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    return;
}
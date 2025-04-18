#include<iostream>
#include<stack>
using namespace std;// Time Complexity O(n)
int main()
{
    int n;
    stack<int>s;
    s.push(-1);
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *ans{new int[n]};
    for(int i=n-1;i>=0;i--)
    {
        int curr=arr[i];
        while(s.top()>=curr)
        {
            s.pop();
        }
        ans[i]=s.top();
        s.push(curr);
    }
    cout<<"Next Smallest Element for Respective Index is:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<stack>
#include<climits>
using namespace std;
int MaxRect(int arr[][100],int n,int m);
int *nextSmaller(int arr[],int n);
int *prevSmaller(int arr[],int n);
int LargestArea(int arr[],int n);
int main()
{
    int n,m;
    cout<<"Enter the Row of Matrix: ";
    cin>>n;
    cout<<"Enter the Column of Matrix: ";
    cin>>m;
    int arr[n][100];
    cout<<"Enter the elements of 2-D Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Largest Rectangle: "<<MaxRect(arr,n,m)<<endl;
    return 0;
}
int* nextSmaller(int arr[],int n)
{
    stack<int>s;
    s.push(-1);
    int *ans{new int[n]};
    for(int i=n-1;i>=0;i--)
    {
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr)
        {
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
int* prevSmaller(int arr[],int n)
{
    stack<int>s;
    s.push(-1);
    int *ans{new int[n]};
    for(int i=0;i<n;i++)
    {
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr)
        {
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
int LargestArea(int arr[],int n)
{
    int *next{new int[n]};
    next=nextSmaller(arr,n);
    int *prev{new int[n]};
    prev=prevSmaller(arr,n);
    int area=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(next[i]==-1)//it means its the last index
        {
            next[i]=n;
        }
        int l=arr[i];
        int b=next[i]-prev[i]-1;
        int newarea=l*b;
        area=max(area,newarea);
    }
    return area;
}
int MaxRect(int arr[][100],int n,int m)
{
    int area=LargestArea(arr[0],m);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]!=0)
            {
                arr[i][j]=arr[i][j]+arr[i-1][j];
            }
            else
            {
                arr[i][j]=0;
            }
        }
        int newarea=LargestArea(arr[i],m);
        area=max(newarea,area);
    }
    return area;
}
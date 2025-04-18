#include<iostream>
#include<climits>
#include<stack>
using namespace std;
int* nextSmaller(int arr[],int n);
int* prevSmaller(int arr[],int n);
void LargestArea(int arr[],int n);
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
    LargestArea(arr,n);
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
void LargestArea(int arr[],int n)
{
    int *next{new int[n]};
    next=nextSmaller(arr,n);
    int *prev{new int[n]};
    prev=prevSmaller(arr,n);
    int area=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(next[i]==-1)//it means its the last index , very important
        {
            next[i]=n;
        }
        int l=arr[i];
        int b=next[i]-prev[i]-1;
        int newarea=l*b;
        area=max(area,newarea);
    }
    cout<<"Largest Rectangular Area in a Histogram is: "<<area<<endl;
    return;
}
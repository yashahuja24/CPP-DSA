#include<iostream>
using namespace std;//This code is written by me.
int Firstocc(int arr[],int start,int end,int key,int &ans);
int Lastocc(int arr[],int start,int end,int key,int &ans);
int main()
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter Key Element: ";
    cin>>key;
    int ans,first,last;
    Firstocc(arr,0,n-1,key,ans);
    first=ans;
    cout<<"First Occurence: "<<first<<endl;
    Lastocc(arr,0,n-1,key,ans);
    last=ans;
    cout<<"Last Occurence: "<<last<<endl;
    cout<<"Number of Occurence: "<<(last-first)+1<<endl;
    return 0;
}
int Firstocc(int arr[],int start,int end,int key,int &ans)
{
    int mid=start+(end-start)/2;
    if(start>end)
    {
        return 0;
    }
    else
    {
        if(arr[mid]==key)
        {
           ans=mid;
           return Firstocc(arr,start,mid-1,key,ans);
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
            return Firstocc(arr,start,end,key,ans);
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
            return Firstocc(arr,start,end,key,ans);
        }
    }
    return 0;
}
int Lastocc(int arr[],int start,int end,int key,int &ans)
{
    int mid=start+(end-start)/2;
    if(start>end)
    {
        return 0;
    }
    else
    {
        if(arr[mid]==key)
        {
            ans=mid;
            return Lastocc(arr,mid+1,end,key,ans);
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
            return Lastocc(arr,start,end,key,ans);
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
            return Lastocc(arr,start,end,key,ans);
        }
    }
    return 0;
}
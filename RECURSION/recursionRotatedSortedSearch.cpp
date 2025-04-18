#include<iostream>
using namespace std;
int rotatedsearch(int arr[],int n,int key);
int getpivot(int arr[],int start,int end,int &ans);
void BS(int arr[],int start,int end,int key);
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
    cout<<"Enter Key Element to be Found: ";
    cin>>key;
    rotatedsearch(arr,n,key);
    return 0;
}
int getpivot(int arr[],int start,int end,int &ans)
{
    if(start>=end)
    {
        return 0;
    }
    else
    {
        int mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
            return getpivot(arr,start,end,ans);
        }
        else
        {
            end=mid;
            ans=mid;
            return getpivot(arr,start,end,ans);
        }
    }
    return 0;
}
void BS(int arr[],int start,int end,int key)
{
    if(start>end)
    {
        return;
    }
    else
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            cout<<"Key Index: "<<mid;
            return;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
            return BS(arr,start,end,key);
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
            return BS(arr,start,end,key);
        }
    }
}
int rotatedsearch(int arr[],int n,int key)
{
    int ans;
    getpivot(arr,0,n-1,ans);
    int pivot=ans;
    if(key>=arr[0] && key<=arr[pivot-1])
    {
        BS(arr,0,pivot-1,key);
    }
    else
    {
        BS(arr,pivot,n-1,key);
    }
    return 0;
}
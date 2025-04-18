#include<iostream>
using namespace std;
int rotatedsearch(int arr[],int n,int key);
int pivot(int arr[],int n);
int BS(int arr[],int start,int end,int key);
int main()
{
    int n,key;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int [n]};
    cout<<"Enter elements of Arrray:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Key element: ";
    cin>>key;
    rotatedsearch(arr,n,key);
    return 0;
}
int BS(int arr[],int start,int end,int key)
{
    int mid,notfound=0;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            cout<<"Index: "<<mid<<endl;
            cout<<"Position: "<<mid+1<<endl;
            notfound=1;
            break;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
    }
    if(notfound==0)
    {
        cout<<"Key Not Found";
    }
    return 0;
}
int getpivot(int arr[],int n)
{
    int start=0,end=n-1,mid;
    while(start<end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    return end;
}
int rotatedsearch(int arr[],int n,int key)
{
    int pivot=getpivot(arr,n);
    if(key>=arr[0] && key>arr[pivot])
    {
        BS(arr,0,pivot-1,key);
    }
    else
    {
        BS(arr,pivot,n-1,key);
    }
    return 0;
}
#include<iostream>
using namespace std;
bool binarysearch(int arr[],int n,int start,int end,int key);
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
    if(binarysearch(arr,n,0,n-1,key)==0)
    {
        cout<<"Key Not Found";
    }
    return 0;
}
bool binarysearch(int arr[],int n,int start,int end,int key)
{
    int mid=start+(end-start)/2;
    if(start>end)
    {
        return false;
    }
    else
    {
        if(arr[mid]==key)
        {
            cout<<"Index: "<<mid<<endl;
            cout<<"Position: "<<mid+1<<" ";
            return true;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
            return binarysearch(arr,n,start,end,key);
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
            return binarysearch(arr,n,start,end,key);
        }
    }
    return true;
}
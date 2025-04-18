#include<iostream>
using namespace std;
int mountain(int arr[],int n,int start,int end);
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
    int ans=mountain(arr,n,0,n-1);
    cout<<"Mountain Element Index: "<<ans;
    return 0;
}
int mountain(int arr[],int n,int start,int end)
{
    if(start>end)
    {
        return 0;
    }
    else
    {
        int mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
            return mountain(arr,n,start,end);
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            cout<<"Mountain element: "<<arr[mid]<<endl;
            return mid;
        }
        else
        {
            end=mid;
            return mountain(arr,n,start,end);
        }
        return 0;
    }
}
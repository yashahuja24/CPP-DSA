#include<iostream>
using namespace std;
int mergesort(int arr[],int start,int end);//Time Complexity: O(n*log(n))
int merge(int arr[],int start,int end);
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
    mergesort(arr,0,n-1);
    cout<<"Sorted Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int mergesort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return 0;
    }
    int mid=start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,end);
    return 0;
}
int merge(int arr[],int start,int end)
{
    int mid=start+(end-start)/2;
    int n=mid-start+1;
    int m=end-mid;
    int *first{new int[n]};
    int *second{new int[m]};
    int k=start;
    for(int i=0;i<n;i++)
    {
        first[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<m;i++)
    {
        second[i]=arr[k++];
    }
    int i=0,j=0,p=start;
    while(i<n && j<m)
    {
        if(first[i]<=second[j])
        {
            arr[p++]=first[i++];
        }
        else if(first[i]>second[j])
        {
            arr[p++]=second[j++];
        }
    }
    while(i<n)
    {
        arr[p++]=first[i++];
    }
    while(j<m)
    {
        arr[p++]=second[j++];
    }
    return 0;
}
#include<bits/stdc++.h>//use for every library
using namespace std;
void mergeSort(vector<int>&arr,int start,int end);
void merge(vector<int>&arr,int start,int end);
int main()
{
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }
    mergeSort(arr,0,n-1);
    cout<<"Sorted Array:-"<<endl;
    for(int num:arr)
    {
        cout<<num<<" ";
    }
    return 0;
}
void mergeSort(vector<int>&arr,int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int mid=start+(end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end);
    return;
}
void merge(vector<int>&arr,int start,int end)
{
    int mid=start+(end-start)/2;
    int m=mid-start+1;
    int n=end-mid;
    vector<int>first(m);
    vector<int>second(n);
    int k=start;
    for(int i=0;i<m;i++)
    {
        first[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<n;i++)
    {
        second[i]=arr[k++];
    }
    int i=0,j=0;
    k=start;
    while(i<m && j<n)
    {
        if(first[i]<=second[j])
        {
            arr[k++]=first[i++];
        }
        else if(first[i]>second[j])
        {
            arr[k++]=second[j++];
        }
    }
    while(i<m)
    {
        arr[k++]=first[i++];
    }
    while(j<n)
    {
        arr[k++]=second[j++];
    }
    return;
}
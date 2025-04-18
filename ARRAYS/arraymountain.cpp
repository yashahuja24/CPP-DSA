#include<iostream>
using namespace std;
int mountain(int arr[],int n);
int main()
{
    int i,n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the elements of Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mountain(arr,n);
    return 0;
}
int mountain(int arr[],int n)
{
    int start=0,end=n-1,mid;
    while(start<end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    cout<<"Mountain Element is: "<<arr[end]<<endl;
    cout<<"Index: "<<end<<endl;
    cout<<"Position: "<<end+1;
    return 0;
}
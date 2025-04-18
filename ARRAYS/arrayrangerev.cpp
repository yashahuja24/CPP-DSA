#include<iostream>
using namespace std;
int rangerev(int arr[],int n,int m);
int main()
{
    int i,n,m;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};//can also be initaialsed as *arr= new int[n];
    cout<<"Enter elements of Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Index: ";
    cin>>m;
    rangerev(arr,n,m+1);//till m array will be same an after m index it will be reversed
    return 0;
}
int rangerev(int arr[],int n,int m)//m is referring to starting index to start reversing
{
    int i,mid,j=0;
    mid=(m+n)/2;
    for(i=m;i<mid;i++)
    {
        swap(arr[i],arr[n-j-1]);
        j++;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
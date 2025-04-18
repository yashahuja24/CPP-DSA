#include<iostream>
using namespace std;
int sumarr(int arr1[],int n,int arr2[],int m);//Time Complexity O(n+m)=O(n)
int main()
{
    int n,m;
    cout<<"Enter size of First Array: ";
    cin>>n;
    int *arr1{new int[n]};
    cout<<"Enter elements of First Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter size of Second Array: ";
    cin>>m;
    int *arr2{new int[m]};
    cout<<"Enter elements of Second Array:-"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    sumarr(arr1,n,arr2,m);
    return 0;
}
int sumarr(int arr1[],int n,int arr2[],int m)//this code is written by me
{
    int ans1=0,ans2=0,sum,r,k;
    for(int i=0;i<n;i++)
    {
        r=arr1[i];
        ans1=(ans1*10)+r;
    }
    for(int i=0;i<m;i++)
    {
        k=arr2[i];
        ans2=(ans2*10)+k;
    }
    sum=ans1+ans2;
    cout<<"Sum of Two array elements is: "<<sum<<endl;
    return 0;
}
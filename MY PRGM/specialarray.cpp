#include<iostream>
using namespace std;
bool specialarr(int arr[],int n);
bool check(int n);
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(specialarr(arr,n))
    {
        cout<<"Array is Special"<<endl;
    }
    else
    {
        cout<<"Array is Not Special"<<endl;
    }
    return 0;
}
bool specialarr(int arr[],int n)
{
    if(n==0)
    {
        return false;
    }
    else if(n==1)
    {
        return true;
    }
    for(int i=1;i<n;i++)
    {
        if(check(arr[i])==check(arr[i-1]))
        {
            return false;
        }
    }
    return true;
}
bool check(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    return 0;
}
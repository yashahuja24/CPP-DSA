#include<iostream>
using namespace std;
bool checksorted(int arr[],int n);
int main()
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int [n]};
    cout<<"Enter elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(checksorted(arr,n))
    {
        cout<<"Array is Sorted";
    }
    else
    {
        cout<<"Array is not Sorted";
    }
    return 0;
}
bool checksorted(int arr[],int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        bool remaining=checksorted(arr+1,n-1);
        return remaining;
    }
}
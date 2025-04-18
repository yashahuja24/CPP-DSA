#include<iostream>
using namespace std;
bool checksorted(int arr[],int n);
int main()
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter element of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(checksorted(arr,n))
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"Not Sorted";
    }
    return 0;
}
bool checksorted(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
           return 0;
        }
    }
    return 1;
}
#include<iostream>
using namespace std;
int checkrotated(int arr[],int n);// 
int main()
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Entr elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    checkrotated(arr,n);
    return 0;
}
int checkrotated(int arr[],int n)
{
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            count++;
        }
    }
    if(arr[n-1]>arr[0])
    {
        count++; 
    }
    if(count<=1)
    {
        cout<<"Array is Sorted and Rotated"<<endl;
    }
    else
    {
        cout<<"Array is not Sorted and Rotated"<<endl;
    }
    return 0;
}
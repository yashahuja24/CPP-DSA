#include<iostream>
using namespace std;
int Bsort(int arr[],int n);
int main()
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sorted Array:-"<<endl;
    
    Bsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int Bsort(int arr[],int n)
{
    if(n<0)
    {
        return 0;
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        return Bsort(arr,n-1);
    }
}
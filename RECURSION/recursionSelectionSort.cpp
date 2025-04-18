#include<iostream>
using namespace std;
int Ssort(int arr[],int n,int j);
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
    Ssort(arr,n,1);
    cout<<"Sorted Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int Ssort(int arr[],int n,int j)
{
    if(n<0)
    {
        return 0;
    }
    else
    {
        for(int i=j;i<n;i++)
        {
            if(arr[0]>arr[i])
            {
                swap(arr[0],arr[i]);
            }
        }
    }
    return Ssort(arr+1,n-1,j++);
}
#include<iostream>
using namespace std;
void DNF(int arr[],int n);
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
    DNF(arr,n);
    cout<<"Sorted Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
void DNF(int arr[],int n)
{
    int i=0,k=0,j=n-1;
    while(k<=j)
    {
        if(arr[k]==0)
        {
            swap(arr[i++],arr[k++]);
        }
        else if(arr[k]==1)
        {
            k++;
        }
        else
        {
            swap(arr[k],arr[j--]);
        }
    }
    return;
}
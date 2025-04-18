#include<iostream>
using namespace std;
void printSubArr(int arr[],int n);
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
    printSubArr(arr,n);
    return 0;
}
void printSubArr(int arr[],int n)//Time complexity O(n^3)
{
    cout<<"All the Sub Arrays are:-"<<endl; 
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return;
}
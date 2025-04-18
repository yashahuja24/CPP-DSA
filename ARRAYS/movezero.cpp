#include<iostream>
using namespace std;
int movezero(int arr[],int n);//this code is my brutte force
int twopointer(int arr[],int n);//two pointer approach
int main()
{
    int i,n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int [n]};
    cout<<"Enter elements of Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //movezero(arr,n);// Time Complexity O(n^2)
    twopointer(arr,n);// Tim Complexity O(n)
    return 0;
}
int movezero(int arr[],int n)//this code is written by me , but the Time comlexity is more , we should solve with 2 pointer approach
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==0 && arr[j]!=0)
            {
                swap(arr[i],arr[j]);
            }
            else
            {
                continue;
            }
        }
    }
    cout<<"Moved Zero:-"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int twopointer(int arr[],int n)// Time complexity O(n)
{
    int i,j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)//here j is pointing to the 0 elements and i is pointing to non zero elements
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    cout<<"Moved Zero:-"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
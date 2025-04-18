#include<iostream>
using namespace std;
void printarray(int arr[],int n);
void recursion(int arr[],int n);
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
    recursion(arr,n);
    return 0;
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}
void recursion(int arr[],int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        printarray(arr,n);//arr gives location of starting point , n refers to current size of array
        cout<<endl;
        recursion(arr+1,n-1);//every iteration size of array decreases by 1;
        return;
    }
}
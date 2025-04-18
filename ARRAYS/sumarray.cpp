#include<iostream>
using namespace std;
int sumarray(int arr[],int n);
int productarray(int arr[],int n);
int main()
{
    int i,n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter elements of Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sumarray(arr,n);
    productarray(arr,n);
    return 0;
}
int sumarray(int arr[],int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum of elements of Array is: "<<sum<<endl;
    return 0;
}
int productarray(int arr[],int n)
{
    int product=1,i;
    for(i=0;i<n;i++)
    {
        product*=arr[i];
    }
    cout<<"Product of elements of Array is: "<<product<<endl;
    return 0;
}
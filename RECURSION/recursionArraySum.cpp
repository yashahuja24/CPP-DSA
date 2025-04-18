#include<iostream>
using namespace std;
int sumArray(int arr[],int n);
int main()
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int*arr{new int[n]};
    cout<<"Enter elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum of Array: "<<sumArray(arr,n);
    return 0;
}
int sumArray(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return arr[0];
    }
    else
    {
        int sum=arr[0]+sumArray(arr+1,n-1);
        return sum;
    }
}
#include<iostream>
#include<climits>
using namespace std;
int SecondLargest(int arr[],int n);
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
    cout<<"Second Largest Element: "<<SecondLargest(arr,n);
    return 0;
}
int SecondLargest(int arr[],int n)
{
    if(n==1)
    {
        return arr[0];
    }
    int largest=INT_MIN,secLargest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secLargest=largest;
            largest=arr[i];
        }
        else if(secLargest<arr[i] && arr[i]>largest)
        {
            secLargest=arr[i];
        }
    }
    return secLargest;
}
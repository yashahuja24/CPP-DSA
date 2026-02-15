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
    int ans=SecondLargest(arr,n);
    if(ans==INT_MIN)
    {
        cout<<"No second largest element";
    }
    else
    {
        cout<<"Second Largest Element: "<<ans;
    }
    return 0;
}
int SecondLargest(int arr[],int n)
{
    if(n<2)
    {
        return INT_MIN;
    }
    int largest=INT_MIN,secLargest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secLargest=largest;
            largest=arr[i];
        }
        else if(secLargest<arr[i] && arr[i]<largest)
        {
            secLargest=arr[i];
        }
    }
    return secLargest;
}
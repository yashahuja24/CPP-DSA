#include<iostream>
#include<climits>
using namespace std;
int maxSum(int arr[],int n,int k);
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the size of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the Window size: ";
    cin>>k;
    cout<<"Max Sum is "<<maxSum(arr,n,k);
    return 0;
}
int maxSum(int arr[],int n,int k)
{
    int maxi=INT_MIN;
    int sum=0,i=0,j=0;
    while(j<n)
    {
        sum+=arr[j];
        if(j-i+1<k)
        {
            j++;
        }
        else if(j-i+1==k)
        {
            maxi=max(maxi,sum);
            sum-=arr[i];
            i++;
            j++;
        }
    }
    return maxi;
}
#include<iostream>
#include<climits>
using namespace std;
int maxsum(int arr[],int n);
int main()//defining all the subarrays in an array
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxsum(arr,n);
    return 0;
}
int maxsum(int arr[],int n)
{
    int sum,maxi;
    maxi=INT_MIN;
    for(int i=0;i<n;i++)//Time complexity O(n^3)
    {
        for(int j=i;j<n;j++)
        {
            sum=0;
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            cout<<endl;
            cout<<"SUM: "<<sum<<endl;
        }
        if(maxi<sum)//can also be done in one line by max builtin func , maxi=max(maxi,sum);
        {
            maxi=sum;
        }
    }
    cout<<"Highest subarray sum is: "<<maxi;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n-1]};
    cout<<"Enter the elements of Array:-"<<endl;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    int sum=n*(n+1)/2;
    int sum_array=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>=0)
        {
            sum_array+=arr[i];
        }
    }
    int ans=sum-sum_array;
    cout<<"Fist Missing Positive Element: "<<ans<<endl;
    return 0;
}
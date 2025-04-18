#include<iostream>
#include<climits>
using namespace std;
int maxelement(int arr[],int n,int &maxi);
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
    int maxi=INT_MIN;
    maxelement(arr,n,maxi);
    cout<<"Max Element: "<<maxi;
    return 0;
}
int maxelement(int arr[],int n,int &maxi)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        if(arr[0]>maxi)
        {
            maxi=arr[0];
        }
        return maxelement(arr+1,n-1,maxi);
    }
    return 0;
}
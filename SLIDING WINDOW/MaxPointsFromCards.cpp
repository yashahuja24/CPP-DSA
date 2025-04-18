#include<iostream>
#include<climits>
using namespace std;
int maxpoints(int arr[],int n,int k);
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
    int k;
    cout<<"Enter the Window Size: ";
    cin>>k;
    cout<<"Max Points are: "<<maxpoints(arr,n,k);
    return 0;
}
int maxpoints(int arr[],int n,int k)
{
    int i=0,j=n-1,sum=0,maxi=INT_MIN,flag=0;
    while(i!=-1)
    {
       if(flag==0 && i<k)
       {
            sum+=arr[i++];
       }
       else
       {
           i--;
           flag=1;
           maxi=max(maxi,sum);
           sum-=arr[i];
           sum+=arr[j--];
       }
    }
    return maxi;
}
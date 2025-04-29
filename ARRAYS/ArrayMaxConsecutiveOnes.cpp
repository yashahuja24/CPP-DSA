#include<iostream>
using namespace std;
int maxLen(int *arr,int n);
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
    int ans=maxLen(arr,n);
    cout<<"Maximum Consicutive One's are: "<<ans;
    return 0;
}
int maxLen(int *arr,int n)
{
    int len=0,maxi=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            len++;
            maxi=max(len,maxi);
        }
        else
        {
            len=0;
        }
    }
    return maxi;
}
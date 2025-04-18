#include<iostream>
#include<climits>
using namespace std;
int maxLen(int arr[],int n,int k);
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the size of Array:-"<<endl;
    for(int i=0;i<n;i++)//binary array
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the Flip Value: ";//Value of 0 with K flips
    cin>>k;
    cout<<"Max Length is "<<maxLen(arr,n,k);
    return 0;
}
int maxLen(int arr[],int n,int k)
{
    int i=0,j=0,maxi=0,zerocount=0;
    while(j<n)
    {
        if(arr[j]==0)
        {
            zerocount++;
        }
        while(zerocount>k)//it maintaines 2 zero inside the window
        {
            if(arr[i]==0)//jb tk i 0 tk aake usko bahar nhi krta , i++ krte rho
            {
                zerocount--;
            }
            i++;
        }
        maxi=max(maxi,j-i+1);
        j++;
    }
    return maxi;
}
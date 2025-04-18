#include<iostream>
#include<climits>
using namespace std;
int minelement(int arr[],int n,int &mini);
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
    int mini=INT_MAX;
    minelement(arr,n,mini);
    cout<<"Min Element: "<<mini;
    return 0;
}
int minelement(int arr[],int n,int &mini)
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
       if(arr[0]<mini)
       {
           mini=arr[0];
       }
       return minelement(arr+1,n-1,mini);
    }
}
#include<iostream>
using namespace std;
void approach2(int *arr,int n,int k);
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter elements of Arry:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the group size: ";
    cin>>k;
    int p,q=k-1;
    for(int i=0;i<n;i+=k)
    {
        if(i+k<=n)
        {
            p=i;
            for(int j=0;j<k/2;j++)
            {
                swap(arr[p++],arr[q--]);
            }
            q+=(3*k)/2;
        }
    }
    cout<<"Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // approach2(arr,n,k);
    return 0;
}
void approach2(int *arr,int n,int k)
{
    int j,p;
    for(int i=0;i<n;i+=k)
    {
        if(i+k<=n)
        {
            p=i;
            j=i+k-1;
            while(j>p)
            {
                swap(arr[p++],arr[j--]);
            }
        }
    }
    cout<<"Sorted in k groups:-";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
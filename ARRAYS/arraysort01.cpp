#include<iostream>
using namespace std;
void sort(int arr[],int n);// Time Complexity O(n)
int main()
{
    int i,n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter elements in Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    cout<<"Sorted 0 and 1:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
void sort(int arr[],int n)
{
    int zerocount=0,onecount=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zerocount++;
        }
        else
        {
            onecount++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(zerocount!=0)
        {
            arr[i]=0;
            zerocount--;
        }
        else
        {
            arr[i]=1;
            onecount--;
        }
    }
    return;
}
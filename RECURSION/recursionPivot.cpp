#include<iostream>
using namespace std;
int pivot(int arr[],int start,int end,int &ans);
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
    int ans;
    pivot(arr,0,n-1,ans);
    cout<<"Pivot Element: "<<arr[ans]<<endl;
    cout<<"Pivot Element Index: "<<ans;
    return 0;
}
int pivot(int arr[],int start,int end,int &ans)
{
    if(start>=end)
    {
        return 0;
    }
    else
    {
        int mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
            return pivot(arr,start,end,ans);
        }
        else
        {
            end=mid;
            ans=mid;
            return pivot(arr,start,end,ans);
        }
    }
    return 0;
}
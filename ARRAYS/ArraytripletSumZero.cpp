#include<iostream>
using namespace std;
void quicksort(int arr[],int start,int end);
int partition(int arr[],int start,int end);
bool tripletsum(int arr[],int n);
bool tripletsum1(int arr[],int n);
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
    quicksort(arr,0,n-1);//sorting array in O(nlog(n)) complexity
    if(tripletsum(arr,n))
    {
        cout<<"Tripet Exists"<<endl;
    }
    else
    {
        cout<<"TRiplet Doesn't Exist"<<endl;
    }
    return 0;
}
void quicksort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int p=partition(arr,start,end);
    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);
}
int partition(int arr[],int start,int end)
{
    int pivot=arr[start];
    int cnt=0;
    for(int i=start+1;i<=end;i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }
    int pivotIndex=start+cnt;
    swap(arr[pivotIndex],arr[start]);
    int i=start,j=end;
    if(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>=pivot)
        {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
bool tripletsum(int arr[],int n)
{
    //sort this array first
    for(int i=0;i<n;i++)
    {
        int l=i+1,r=n-1;
        while(l<r)
        {
            int sum=arr[i]+arr[l]+arr[r];
            if(sum==0)
            {
                return true;
            }
            else if(sum<0)
            {
                l++;
            }
            else if(sum>0)
            {
                r--;
            }
        }
    }
    return false;
}
#include<iostream>
using namespace std;
int quicksort(int arr[],int start,int end);//Time Complexity: O(n*log(n)) 
int partition(int arr[],int start,int end);
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
    quicksort(arr,0,n-1);
    cout<<"Sorted Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int quicksort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return 0;
    }
    int p=partition(arr,start,end);
    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);
    return 0;
}
int partition(int arr[],int start,int end)
{
    int pivot=arr[start],count=0;
    for(int i=start+1;i<=end;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    int pivotIndex=start+count;
    swap(arr[pivotIndex],arr[start]);
    int i=start,j=end;
    while(i<pivotIndex && j>pivotIndex)
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
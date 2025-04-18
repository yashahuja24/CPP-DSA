#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key);
int binarySearch(int arr[],int n,int key);//in binary search array must be sorted in ascending order.
int main()
{
    int i,j,n,key,temp;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};//only for vs code.
    cout<<"Enter elements of Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Key Element to be found: ";
    cin>>key;
    cout<<"LINEAR SEARCH:-"<<endl;
    linearSearch(arr,n,key);
    cout<<"BINARY SEARCH:-"<<endl;
    for(i=0;i<n;i++)//sorting array before calling the binary search program
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];//can also use built in function swap instead of temp
                arr[j]=temp;
            }
        }
    }
    binarySearch(arr,n,key);
    return 0;
}
int linearSearch(int arr[],int n,int key)//TIME COMPLEXITY: O(n)
{
    int i,notfound=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Index: "<<i<<endl;
            cout<<"Position: "<<i+1<<endl;
            notfound=1;
            break;
        }
    }
    if(notfound==0)
    {
        cout<<"Key not Found"<<endl;
    }
    return 0;
}
int binarySearch(int arr[],int n,int key)//TIME COMPLEXITY: O(log n)
{
    int start=0,end=n,mid,notfound=0;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            cout<<"INDEX: "<<mid<<endl;
            cout<<"POSITION: "<<mid+1<<endl;
            notfound=1;
            break;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
    }
    if(notfound==0)
    {
        cout<<"Key not Found"<<endl;
    }
    return 0;
}
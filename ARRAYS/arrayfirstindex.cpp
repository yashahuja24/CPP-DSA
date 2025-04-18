#include<iostream>
using namespace std;
int LSoccurence(int arr[],int n,int key);//LS: Linear Search
int LSoccurence2(int arr[],int n,int key);
int BSoccurence(int arr[],int n, int key);//BS: Binary Search
int main()
{
    int i,j,n,key;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter elements of Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key element to be found: ";
    cin>>key;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"Given Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    LSoccurence(arr,n,key);
    cout<<"ANOTHER APPROACH TO SAME QUESTION:-"<<endl;
    LSoccurence2(arr,n,key);
    cout<<"USING BINARY SEARCH:-"<<endl;
    BSoccurence(arr,n,key);
    return 0;
}
int LSoccurence(int arr[],int n,int key)//Time complexity O(n^2) , not so good solution but works well
{
    int i,j,found=0,start,end,occurence;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]==key)
            {
                start=j;
                found=1;
                break;
            }
        }
        if(arr[i]>key)
        {
            end=i-1;
            break;
        }
        else if(key==arr[n-1])
        {
            end=n-1;
            break;
        }
    }
    occurence=(end-start)+1;
    if(found==0)
    {
        cout<<"Key not found"<<endl;
    }
    else
    {
        cout<<"First Index: "<<start<<" ";
        cout<<"Position: "<<start+1<<endl;
        cout<<"Last Index: "<<end<<" ";
        cout<<"Position: "<<end+1<<endl;
        cout<<"Number of Occurence: "<<occurence<<endl;
    }
    return 0;
}
int LSoccurence2(int arr[],int n,int key)//Time complexity O(2n) , optimised solution
{
    int i,start,end,found=0,occurence;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            start=i;
            found=1;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            end=i;
        }
    }
    occurence=(end-start)+1;
    if(found==0)
    {
        cout<<"Key not found"<<endl;
    }
    else
    {
        cout<<"First Index: "<<start<<" ";
        cout<<"Position: "<<start+1<<endl;
        cout<<"Last Index: "<<end<<" ";
        cout<<"Position: "<<end+1<<endl;
        cout<<"Number of Occurence: "<<occurence<<endl;
    }
    return 0;
}
int BSoccurence(int arr[],int n,int key)
{
    int start=0,end=n,mid,ans;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
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
    cout<<"First occurence: "<<ans<<" ";
    cout<<"Position: "<<ans+1<<endl;
    start=0;
    end=n;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
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
    cout<<"Last occurence: "<<ans<<" ";
    cout<<"Position: "<<ans+1<<endl;
    return 0;
}
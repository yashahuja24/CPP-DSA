#include<iostream>
#include<climits>
using namespace std;//Time Complexity O(N)
void LargestSum(int arr[],int n);//it also prints the Sub Array
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
    LargestSum(arr,n);
    return 0;
}
void LargestSum(int arr[],int n)//Kadan's Algorithm
{
    int sum=0,maxi=INT_MIN;
    int start,end;
    for(int i=0;i<n;i++)
    {
        if(sum==0)
        {
            start=i;
        }
        sum+=arr[i];
        if(sum>maxi)
        {
            maxi=sum;
            end=i;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<"Largest Sub Array Sum: "<<maxi<<endl;
    cout<<"Largest Sum Sub Array:-"<<endl;
    for(int i=start;i<=end;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}
#include<iostream>
using namespace std;
int Isort(int arr[],int n,int i);
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
    Isort(arr,n,1);
    cout<<"Sorted Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int Isort(int arr[],int n,int i)
{
    if(i>=n)
    {
        return 0;
    }
    int temp=arr[i],j;
    for(j=i-1;j>=0;j--)
    {
        if(temp<arr[j])
        {
            arr[j+1]=arr[j];
        }
        else
        {
            break;
        }
    }
    arr[j+1]=temp;
    i++;
    return Isort(arr,n,i);
}
#include<iostream>
using namespace std;
int arrunion(int arr[],int n,int arr1[],int m);//gives union of both the arrays
int arrintersection(int arr[],int n,int arr1[],int m);//gives the duplicate in both the arrays
int arrdifference(int arr[],int n,int arr1[],int m);//removes the duplicate in both the arrays
void print(int arr[],int n);
int main()
{ 
    int n,m;
    cout<<"Enter size of First Array: ";
    cin>>n;
    cout<<"Enter size of Second Array: ";
    cin>>m;
    int *arr{new int[n]};
    int *arr1{new int[m]};
    cout<<"Enter elements of First Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter elements of Second Array:-"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    arrunion(arr,n,arr1,m);//arrays must be sorted
    arrintersection(arr,n,arr1,m);//arrays must be sorted
    arrdifference(arr,n,arr1,m);//arrays must be sorted
    return 0;
}
int arrunion(int arr[],int n,int arr1[],int m)
{
    int k=0,i=0,j=0;
    int num[100];
    while(i<n && j<m)
    {
        if(arr[i]<arr1[j])
        {
            num[k++]=arr[i++];
        }
        else if(arr[i]>arr1[j])
        {
            num[k++]=arr1[j++];
        }
        else if(arr[i]==arr1[j])
        {
            num[k++]=arr[i++];
            j++;
        }
    }
    while(i<n)
    {
        num[k++]=arr[i++];
    }
    while(j<m)
    {
        num[k++]=arr1[j++];
    }
    cout<<"Union of Two given Arrays is:-"<<endl;
    print(num,k);
    return 0;
}
int arrintersection(int arr[],int n,int arr1[],int m)
{
    int k=0,i=0,j=0;
    int num[100];
    while(i<n && j<m)
    {
        if(arr[i]<arr1[j])
        {
            i++;
        }
        else if(arr[i]>arr1[j])
        {
            j++;
        }
        else if(arr[i]==arr1[j])
        {
            num[k++]=arr[i++];
            j++;
        }
    }
    cout<<"Intersection of Two given Arrays is:-"<<endl;
    print(num,k);
    return 0;
}
int arrdifference(int arr[],int n,int arr1[],int m)
{
    int num[100];
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr[i]<arr1[j])
        {
            num[k++]=arr[i++];
        }
        else if(arr[i]>arr1[j])
        {
            num[k++]=arr1[j++];
        }
        else if(arr[i]==arr1[j])
        {
            i++;
            j++;
        }
    }
    while(i<n)
    {
        num[k++]=arr[i++];
    }
    while(j<m)
    {
        num[k++]=arr1[j++];
    }
    cout<<"Difference of Both the Arrays are:-"<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    return 0;
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
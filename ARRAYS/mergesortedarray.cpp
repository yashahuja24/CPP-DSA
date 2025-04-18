#include<iostream>
using namespace std;
int mergearray(int arr1[],int n,int arr2[],int m,int arr3[]);// Time Complexity O(n*(Log n))
int printarray(int arr[],int n);
int main()
{
    int n,m,k;
    cout<<"Enter size of First Array: ";
    cin>>n;
    int *arr1{new int[n]};
    cout<<"Enter elements of First Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter size of Second Array: ";
    cin>>m;
    int *arr2{new int[m]};
    cout<<"Enter elements of Second Array:-"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    k=m+n;
    int *arr3{new int[k]};
    mergearray(arr1,n,arr2,m,arr3);
    cout<<"Merged Sorted Array:-"<<endl;
    printarray(arr3,k);
    return 0;
}
int mergearray(int arr1[],int n,int arr2[],int m,int arr3[])//two pointer approach to merge two arrays
{
    int i=0,j=0,k=0;
    while(i<n && j<m)//we can also write while(i<n || j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];//we can also write:  arr3[k++]=arr1[i++],because it is post increment
            i++;// so we can avoid writing these two lines
            k++;
        }
        else if(arr1[i]>arr2[j])
        {
            arr3[k]=arr2[j];//can also be written as: arr3[k++]=arr2[j++];
            j++;
            k++;
        }
        else if(arr1[i]==arr2[j])
        {
            arr3[k++]=arr1[i++];//if u want to remove same element increment j in this block of else if
        }
    }
    while(i<n)
    {
        arr3[k++]=arr1[i++];//explanantion on line 38
    }
    while(j<m)
    {
        arr3[k++]=arr2[j++];
    }
    return arr3[k];
}
int printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
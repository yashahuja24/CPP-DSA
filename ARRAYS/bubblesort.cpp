#include<iostream>
using namespace std;
int Bsort(int arr[],int n);
int main()
{
    int i,n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the elements in Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Bsort(arr,n);// best case time complexity is O(n) , Worst case is O(n^2)
    return 0;
}
int Bsort(int arr[],int n)//Firstly, this code puts biggest number in place 
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)// we can also write j<n-i-1 , it will work same , i loop ignores last part which is also sorted
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted Array: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*
n-i-1 explanation:-

We are doing n-i-1 , because at first(in round 1, i=0) the largest element will be at the end 
now we have to ignore that part of the code
now we go till n-1 part , then in second iteration we will go till n-2 , because last two biggest elements are in their place.
so we dont have to go their and check their positions again and again 

*/
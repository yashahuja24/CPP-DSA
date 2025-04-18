#include<iostream>
using namespace std;
int pivot(int arr[],int n);// Pivot element is the minimum number in a sorted array , but rotated like(7,9,1,2,3), monotonic
int main()// in this example ,must be a ROTATED SORTED ARRAY , THEN ONLY IT WILL WORK(PIVOT ELEMENT PROBLEMS) 
{
    int i,n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter elements of Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    pivot(arr,n);
    return 0;
}
int pivot(int arr[],int n)
{
    int start=0,end=n-1;
    while(start<end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    cout<<"Pivot Element: "<<arr[end]<<endl;// we can aslo write arr[start] ,coz they are indicationg same value ,coz start<end not =
    cout<<"Pivot Element Index: "<<end<<endl;
    cout<<"Pivot Element Postion: "<<end+1<<endl;
    return 0;
}
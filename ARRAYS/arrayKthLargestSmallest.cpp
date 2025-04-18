#include<iostream>
using namespace std;
int main()//Time Complexity can be O(nlogn) , with quick sort
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
    //bubblesort , can use qsort
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    int k;
    cout<<"Enter the Kth Position: ";
    cin>>k;
    cout<<"Kth Smallest Element: "<<arr[k-1]<<endl;
    cout<<"Kth Largest Element: "<<arr[n-k];
    return 0;
}
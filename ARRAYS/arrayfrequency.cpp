#include<iostream>
using namespace std;
int countfrequency(int arr[],int n);
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
    cout<<"Frequency of Array is:-"<<endl;
    countfrequency(arr,n);//we must send a sorted array to work this code
    return 0;
}
int countfrequency(int arr[],int n)//Time Complexity O(n^2);
{
    int i,j;
    for(i=0;i<n;i++)
    {
        int count=1;
        if(arr[i]==arr[i-1])
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        cout<<arr[i]<<" : "<<count<<endl;
    }
    return 0;
}
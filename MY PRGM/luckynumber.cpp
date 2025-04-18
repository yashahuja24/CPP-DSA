#include<iostream>
using namespace std;
int luckynum(int arr[],int n);
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
    luckynum(arr,n);
    return 0;
}
int luckynum(int arr[],int n)//Time complexity is O(n^2)
{
    int count,k=0;
    int num[100];
    cout<<"Lucky Numbers are:-"<<endl;
    for(int i=0;i<n;i++)
    {
        count=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                count++;
            }
        }
        if(arr[i]==count)
        {
           num[k++]=arr[i];
        }
    }
    for(int i=0;i<k;i++)
    {
        if(num[i]==num[i+1])
        {
            continue;
        }
        else
        {
            cout<<num[i]<<" ";
        }
    }
    return 0;
}
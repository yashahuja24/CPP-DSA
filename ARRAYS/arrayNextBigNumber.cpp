#include<iostream>
using namespace std;
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
    cout<<"OUTPUT:-"<<endl;
    int num,count;
    for(int i=0;i<n;i++)
    {
        count=1;
        int num=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                cout<<count<<" ";
                count=1;
                num=0;
                break;
            }
            count++;
        }
        if(arr[i]==num)
        {
            cout<<0<<" ";
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *ans{new int[n]};
    int pos=0,neg=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            ans[pos]=arr[i];
            pos+=2;
        }
        else
        {
            ans[neg]=arr[i];
            neg+=2;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
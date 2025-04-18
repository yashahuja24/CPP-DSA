#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the elements of Array:-"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int buy=arr[0],profit=0;
    for(int i=1;i<n;i++)
    {
        buy=min(buy,arr[i]);
        if(arr[i]>buy)
        {
            profit+=(arr[i]-buy);
            buy=arr[i];
        }
    }
    cout<<"Profit: "<<profit;
    return 0;
}
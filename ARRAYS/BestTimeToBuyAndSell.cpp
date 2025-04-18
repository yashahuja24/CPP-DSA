#include<iostream>
using namespace std;//if u want simpler approach then visit leetcode buy and sell stock
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
    int buy=arr[0],sell=0,sell_index=0,buy_index=0,maxi=0,profit=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<buy)
        {
            buy=arr[i];
            buy_index=i;
        }
        if(arr[i]>sell)
        {
            sell=arr[i];
            sell_index=i;
        }
        if(sell_index<buy_index)
        {
            sell=0;
            sell_index=buy_index;
        }
        profit=sell-buy;
        maxi=max(maxi,profit);
    }
    cout<<"Buy Price: "<<buy_index<<endl;
    cout<<"Sell Price: "<<sell_index<<endl;
    cout<<"Profit: "<<maxi;
    return 0;
}
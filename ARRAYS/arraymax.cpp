#include<iostream>
#include<climits>
using namespace std;
int builtinfunc(int arr[],int n);
int main()//it works in DEV C++, it doesnt work in vs code, code is correct.
{
    int i,n,maxno,minno;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};//Normal way didnt work so we had to initialize it like this.
    cout<<"Enter Elements of Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxno=INT_MIN;
    minno=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(maxno<arr[i])
        {
            maxno=arr[i];
        }
        if(minno>arr[i])
        {
            minno=arr[i];
        }
    }
    cout<<"MAXIMUM NUMBER IN ARRAY IS: "<<maxno<<endl;
    cout<<"MINIMUM NUMBER IN ARRAY IS: "<<minno<<endl;
    cout<<"USING BUILT IN FUNCTIONS:-"<<endl;
    builtinfunc(arr,n);
    return 0;
}
int builtinfunc(int arr[],int n)
{
    int i,maxno,minno;
    maxno=INT_MIN;
    minno=INT_MAX;
    for(i=0;i<n;i++)
    {
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }
    cout<<"MAXIMUM NUMBER: "<<maxno<<endl;
    cout<<"MINIMUM NUMBER: "<<minno<<endl;
    return 0;
}
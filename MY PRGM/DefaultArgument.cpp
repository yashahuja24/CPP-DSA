#include<iostream>
using namespace std;//start is the default argument if we doesnt pass any argument it will automatically start from given value
void print(int arr[],int n,int start=1)
{
    for(int i=start;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter element of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered Array is:-"<<endl;
    print(arr,n);
    return 0;
}
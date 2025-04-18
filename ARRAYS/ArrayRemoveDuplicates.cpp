#include<iostream>
#include<vector>
using namespace std;
int main()//in this program we have to print all the elements only once and dont have to print the duplicates 
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[i]!=arr[j])
        {
            arr[++i]=arr[j];
        }
    }
    n=i+1;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
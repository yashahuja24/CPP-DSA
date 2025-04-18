#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n,int key,int i);
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
    int key,i=0;
    cout<<"Enter the key Element to be Found: ";
    cin>>key;
    if(linearsearch(arr,n,key,i))
    {
        cout<<"Key Found"<<endl;
    }
    else
    {
        cout<<"Key not found";
    }
    return 0;
}
bool linearsearch(int arr[],int n,int key,int i)
{
    if(n==0)
    {
        return false;
    }
    else
    {
        if(arr[0]==key)
        {
            cout<<"Index: "<<i<<endl;
            return true;
        }
        return linearsearch(arr+1,n-1,key,++i);
    }
}
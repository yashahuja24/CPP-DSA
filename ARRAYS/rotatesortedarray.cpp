#include<iostream>
using namespace std;
int rotatearray(int arr[],int n,int k);
int main()
{
    int n,k;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter elememts of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter value of Rotation: ";
    cin>>k;
    rotatearray(arr,n,k);
    return 0;
}
int rotatearray(int arr[],int n,int k)
{
    int temp[n];//k is the value of rotations
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n]=arr[i];//we are putting value in temp array , and then copy in our main array
    }
    arr=temp;//this operation is valid because arr is defined with pointer, (the vlaues must be copied with for loop arr[i]=temp[i];
    cout<<"Rotated Array with "<<k<<" Places:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
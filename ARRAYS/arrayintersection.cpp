#include<iostream>
using namespace std;
int intersection(int arr[],int array[],int n,int m);//it finds common number betweeen two sets or array.
int main()
{
    int i,n,m;
    cout<<"Enter size of first Array: ";
    cin>>n;
    int *arr{new int [n]}, *array{new int[m]};//assinging two dynamic arrays using heap memory
    cout<<"Enter elements of first Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter size of second array: ";
    cin>>m;
    cout<<"Enter elements of second array:-"<<endl;
    for(i=0;i<m;i++)
    {
        cin>>array[i];
    }
    intersection(arr,array,n,m);
    return 0;
}
int intersection(int arr[],int array[],int n,int m)//Time Complexity O(n^2) , can be done in O(n) with XOR operator,2 times xor O(n+n)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i]==array[j])
            {
                cout<<"INTERSECTED ELEMENT: "<<arr[i]<<endl;
                c++;
            }
        }
    }
    if(c==0)
    {
        return -1;
    }
    return 0;
}

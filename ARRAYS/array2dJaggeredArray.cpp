#include<iostream>
using namespace std;
int main()//Jaggered 2d array
{
    int n;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    int **arr{new int*[n]};
    int c[100];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter columns for "<<i+1<<" Row: ";
        cin>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[c[i]];
    }
    cout<<"Enter elements of 2 Dimensional Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c[i];j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Entered 2 Dimensional Array is:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c[i];j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)//releasing memeory of array
    {
        delete []arr[i];
    }
    delete []arr;
    return 0;
}
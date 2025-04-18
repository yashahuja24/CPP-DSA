#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    cout<<"Enter Number of Columns: ";
    cin>>m;
    int **arr{new int*[n]};
    for(int i=0;i<n;i++)//creating columns for every row
    {
        arr[i]=new int[m];
    }
    cout<<"Enter elements of 2 Dimensional Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Entered 2 Dimensional Array is:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
//deleting used memory
    for(int i=0;i<n;i++)
    {
        delete []arr[i];
    }
    delete []arr;
    return 0;
}
#include<iostream>
using namespace std;
int columninput(int n,int m);
int main()
{
    int n,m;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    cout<<"Ent3r Number of Columns: ";
    cin>>m;
    int arr[n][m];
    cout<<"Enter elements of 2 Dimensional Array:-"<<endl;//taking input as rows(normal input)
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Elements of Array(W.R.T Row) are:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Taking input as Column:-"<<endl;
    columninput(n,m);
    return 0;
}
int columninput(int n,int m)
{
    int arr[n][m];
    for(int i=0;i<m;i++)//taking input of 2d array as column
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[j][i];// just taking input vertically
        }
    }
    cout<<"Elements of array(W.R.T Column) are:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
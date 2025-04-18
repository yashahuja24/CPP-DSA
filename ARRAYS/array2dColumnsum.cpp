#include<iostream>
using namespace std;
int columnsum(int arr[][100],int n,int m);
int main()
{
    int n,m;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    cout<<"Enter Number of Columns: ";
    cin>>m;
    int arr[n][100];//its important to intialize a 2d array with specific size of column(not a variable) , must be a constant number
    cout<<"Enter elements of 2 Dimensional Array:-"<<endl;
    for(int i=0;i<m;i++)//column wise input
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[j][i];
        }
    }
    columnsum(arr,n,m);
    return 0;
}
int columnsum(int arr[][100],int n,int m)
{
    cout<<"Entered 2 Dimensional Array is:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int c=1;
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=arr[j][i];
        }
        cout<<"Sum of "<<c++<<" Column is: "<<sum<<endl;
    }
    return 0;
}
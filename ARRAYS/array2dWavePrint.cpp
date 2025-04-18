#include<iostream>
using namespace std;
int rowwaveprint(int arr[][100],int n,int m);
int columnwaveprint(int arr[][100],int n,int m);
int rowwiseprint(int arr[][100],int n,int m);
int columnwiseprint(int arr[][100],int n,int m);
int main()
{
    int n,m;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    cout<<"Enter Number of Columns: ";
    cin>>m;
    int arr[n][100];
    cout<<"Enter elements of 2 Dimensional Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Given 2 Dimensional Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Row Wise Print:-"<<endl;
    rowwiseprint(arr,n,m);
    cout<<"Column Wise Print:-"<<endl;
    columnwiseprint(arr,n,m);
    cout<<"Row Wave Print:-"<<endl;
    rowwaveprint(arr,n,m);
    cout<<"Column Wave Print:-"<<endl;
    columnwaveprint(arr,n,m);
    return 0;
}
int rowwiseprint(int arr[][100],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    return 0;
}
int columnwiseprint(int arr[][100],int n,int m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[j][i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}
int rowwaveprint(int arr[][100],int n,int m)
{
    for(int i=0;i<n;i++)//row wise loop
    {
        if(i%2==0)//even rows
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else if(i%2!=0)//odd rows
        {
            for(int j=n-1;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}
int columnwaveprint(int arr[][100],int n,int m)
{
    for(int i=0;i<m;i++)//column wise loop
    {
        if(i%2==0)//even columns
        {
            for(int j=0;j<n;j++)//row wise loop
            {
                cout<<arr[j][i]<<" ";
            }
        }
        else if(i%2!=0)//odd columns
        {
            for(int j=n-1;j>=0;j--)
            {
                cout<<arr[j][i]<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}
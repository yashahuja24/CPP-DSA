#include<iostream>
using namespace std;//we have to check from which index we are starting and if we are printing column wise or row wise
int rotatematrix90(int arr[][100],int n,int m);//only square matrix can be rotated.
int rotatematrix180(int arr[][100],int n,int m);
int rotatematrix270(int arr[][100],int n,int m);
int main()
{
    int n,m;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    cout<<"Enter Number of Columns: ";
    cin>>m;
    int arr[n][100];
    cout<<"Enter element of 2 Dimensional Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Given Matrix:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Rotated Matrix by 90 degrees"<<endl;
    rotatematrix90(arr,n,m);// in this program n and m value doesn't matter coz n is always equals to m(square matrix)
    cout<<"Rotated Matrix by 180 degrees"<<endl;
    rotatematrix180(arr,n,m);
    cout<<"Rotated Matrix by 270 degrees"<<endl;
    rotatematrix270(arr,n,m);// Now if we do 360 , same matrix will be printed.
    return 0;
}
int rotatematrix90(int arr[][100],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--)
        {
            cout<<arr[j][i]<<" ";//column wise print , thats why arr[j][i]
        }
        cout<<endl;
    }
    return 0;
}
int rotatematrix180(int arr[][100],int n,int m)
{
    for(int i=m-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            cout<<arr[i][j]<<" ";//row wise print , thats why arr[i][j]
        }
        cout<<endl;
    }
    return 0;
}
int rotatematrix270(int arr[][100],int n,int m)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[j][i]<<" ";//column wise print , thts why arr[j][i]
        }
        cout<<endl;
    }
    return 0;
}
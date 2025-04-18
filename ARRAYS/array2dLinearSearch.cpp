#include<iostream>
using namespace std;
bool LinearSearch(int arr[][100],int n,int m,int key);//It is important to specify the size of columns in  parameter or arguments
int main()
{
    int n,m,key;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    cout<<"Enter Number of Columns: ";
    cin>>m;
    int arr[n][100];//we cannot assign a variable into column size , we have to take a constant then we can decide size
    cout<<"Enter elements of 2 Dimensional Array:-"<<endl;
    for(int i=0;i<n;i++)//Taking input as Row
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the Key element: ";
    cin>>key;
    if(LinearSearch(arr,n,m,key))
    {
        cout<<"Key found";
    }
    else
    {
        cout<<"Key not found";
    }
    return 0;
}
bool LinearSearch(int arr[][100],int n,int m,int key)//Time complexity O(n*m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(key==arr[i][j])
            {
                cout<<"Index: arr"<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
                cout<<"Position: arr"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<endl;
                return 1;
            }
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int binarysearch(int arr[][100],int n,int m,int key);//Time complexity O(log(n*m))
int main()
{
    int n,m,key;
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
    cout<<"Given Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the Key Element to be Found: ";
    cin>>key;
    binarysearch(arr,n,m,key);
    return 0;
}
int binarysearch(int arr[][100],int n,int m,int key)
{
    int start=0,end=(n*m)-1,mid,element,found=0;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        element=arr[mid/m][mid%m];//gives us the mid element location in 2d array(mid gives index of 1d array)
        if(element==key)
        {
            cout<<"Index: arr["<<mid/m<<"]["<<mid%m<<"]"<<endl;
            cout<<"Position: arr["<<(mid/m)+1<<"]["<<(mid%m)+1<<"]";
            found=1;
            break;
        }
        else if(element<key)
        {
            start=mid+1;
        }
        else if(element>key)
        {
            end=mid-1;
        }
    }
    if(found==0)
    {
        cout<<"Key not found";
    }
    return 0;
}
//int row=mid/m;
//int col=mid%m;they provide 2d index for binary search
#include<iostream>
#include<climits>
using namespace std;
int rowsum(int arr[][100],int n,int m);
int main()
{
    int n,m,maxi,c;
    cout<<"Enter size of Row: ";
    cin>>n;
    cout<<"Enter size of Column: ";
    cin>>m;
    int arr[n][100];
    cout<<"Enter elements of 2 Dimentional Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int ans=0;
        for(int j=0;j<m;j++)
        {
            ans+=arr[i][j];
        }
        if(ans>maxi)
        {
            c=i+1;//indexig starts from 0 thts why we took i+1;
            maxi=ans;
        }
    }
    cout<<"Highest Sum Row number: "<<c<<endl;
    cout<<"Largest Row sum is: "<<maxi<<endl;
    cout<<"Row wise sum is:-"<<endl;
    rowsum(arr,n,m);
    return 0;
}
int rowsum(int arr[][100],int n,int m)
{
    int c=1;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=arr[i][j];
        }
        cout<<"Sum of "<<c++<<" Row is: "<<sum<<endl;
    }
    return 0;
}
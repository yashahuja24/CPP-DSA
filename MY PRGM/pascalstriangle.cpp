#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k,ans;
    cout<<"Enter the number of rows for pascals triangle:-"<<endl;
    cin>>n;
    cout<<"Pascals Triangle:-"<<endl;
    for(i=0;i<n;i++)
    {
        for(k=0;k<=(n-i);k++)
        {
            cout<<" ";
        }
        ans=1;
        for(j=0;j<=i;j++)
        {
            cout<<ans<<" ";
            ans=ans*(i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}
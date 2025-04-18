#include<iostream>
#include<stack>
using namespace std;
inline int findceleb(int arr[][100],int n);//Time Complexity O(n)
int main()
{
    int n;
    cout<<"Enter Number of Rows and Columns: ";
    cin>>n;
    int arr[n][100];
    cout<<"Enter the elements of Matrix:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ans=findceleb(arr,n);
    if(ans==-1)
    {
        cout<<"No celebrity Found"<<endl;
    }
    else
    {
        cout<<ans<<" is the celebrity"<<endl;
    }
    return 0;
}
int findceleb(int arr[][100],int n)
{
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        s.push(i);
    }
    int a,b;
    while(s.size()>1)
    {
        a=s.top();
        s.pop();
        b=s.top();
        s.pop();
        if(arr[a][b]==1)
        {
            s.push(b);
        }
        else
        {
            s.push(a);
        }
    }
    int ans=s.top(),rowcheck=1,colcheck=1;//checking the potential candidate if it is celebrity , if not no celebrity found 
    for(int i=0;i<n;i++)//checking row
    {
        if(i==ans)
        {
            continue;
        }
        else
        {
            if(arr[ans][i]==0)
            {
                rowcheck++;
            }
        }
    }
    for(int i=0;i<n;i++)//checking column
    {
        if(i==ans)
        {
            continue;
        }
        else
        {
            if(arr[i][ans]==1)
            {
                colcheck++;
            }
        }
    }
    if(rowcheck==n && colcheck==n)
    {
        return ans;
    }
    return -1;
}
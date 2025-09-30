#include<bits/stdc++.h>//use for every library
using namespace std;
int main()
{
    int R,n;
    cout<<"Enter how many times you want the pattern: ";
    cin>>R;
    cout<<"Enter number of rows: ";
    cin>>n;
    if(n%2!=0 && R%2!=0)
    {
    for(int i=0;i<n;i++)
    {
        for(int repeat=0;repeat<R;repeat++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 || i==(n-1))
                {
                    if(j==(n/2))
                    {
                        cout<<"* ";
                    }
                    else
                    {
                        cout<<"- ";
                    }
                }
                else if(i==n/2 && j!=0 && j!=n-1 && j!=n/2)
                {
                    cout<<"* ";
                }
                else if(j==0 || j==(n-1))
                {
                    cout<<"| ";
                }
                else if(j==n/2)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
else
{
    cout<<"Enter an odd number";
}
    return 0;
}
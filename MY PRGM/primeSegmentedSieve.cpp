#include<iostream>
using namespace std;
int main()
{
    int m,n,count=0;
    cout<<"Enter the First Number: ";
    cin>>m;
    cout<<"Enter the Second Number: ";
    cin>>n;
    int prime[n];
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<n;j=j+i)
            {
                prime[j]=false;
            }
            if(i>=m && i<n)
            {
                count++;
                cout<<i<<" ";
            }
        }
    }
    cout<<"\nTheir are "<<count<<" Prime Numbers between "<<m<<" And "<<n;
}
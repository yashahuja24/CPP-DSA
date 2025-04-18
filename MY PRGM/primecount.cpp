#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c,count=0;
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    cout<<"Prime numbers till entered number are:-"<<endl;
    for(i=2;i<n;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            count++;
            cout<<i<<endl;
        }
    }
    cout<<"Their are "<<count<<" Prime Numbers till Number "<<n;
    return 0;
}
#include<iostream>
using namespace std;
int rangeprime(int m,int n);//Time complexity O(n)
int main()
{
    int n,c=0,i;
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"Entered number is a prime number"<<endl;
    }
    else
    {
        cout<<"Entered number is not a prime number"<<endl;
    }
    cout<<"RANGE PRIME NUMBERS:-"<<endl;
    int m,num;
    cout<<"Enter first number: ";
    cin>>m;
    cout<<"Enter second number: ";
    cin>>num;
    rangeprime(m,num);
    return 0;
}
int rangeprime(int m,int n)
{
    int i,j,c=0;
    for(i=m;i<=n;i++)//Time Complexity O(n^2) , n is taken (m-n); 
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c=1;
            }
        }
        if(c==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
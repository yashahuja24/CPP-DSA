#include<iostream>
using namespace std;
int fibonacci(int n);
int main()
{
    int n,ans;
    cout<<"Enter Number: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<fibonacci(i)<<" ";
        ans=fibonacci(i);//takes the last value and print it;
    }
    cout<<endl<<n<<" term of Fibonacci Series is: "<<ans;
    return 0;
}
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        int first=fibonacci(n-1),second=fibonacci(n-2);
        int ans=first+second;
        return ans;
    }
}
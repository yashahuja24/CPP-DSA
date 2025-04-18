#include<iostream>
using namespace std;
int sum(int n);
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int ans=sum(n);
    cout<<"Sum of N Natual Numbers is: "<<ans;
    return 0;
}
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int add=n+sum(n-1);
        return add;
    }
}
#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n,r,ans;
    cout<<"Enter value of n and r:-"<<endl;
    cin>>n>>r;
    ans=(factorial(n)/(factorial(n-r)*factorial(r)));
    cout<<"Possible combinations are: "<<ans;
    return 0;
}
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
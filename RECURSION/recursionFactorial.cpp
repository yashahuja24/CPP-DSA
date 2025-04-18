#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int ans=factorial(n);
    cout<<"Factorial of Number is: "<<ans;
}
int factorial(int n)
{
    int product=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        product=n*factorial(n-1);
        return product;
    }
}
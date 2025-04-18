#include<iostream>
using namespace std;
int main()// subraction of product of number and sum of number;
{
    int sum=0,product=1,n,r,ans;
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        product*=r;
        sum+=r;
        n=n/10;
    }
    ans=product-sum;
    cout<<"Product of integer is: "<<product<<endl;
    cout<<"Sum of integer is: "<<sum<<endl;
    cout<<"Answer: "<<ans<<endl;
    return 0;
}
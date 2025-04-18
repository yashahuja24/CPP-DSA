#include<iostream>
using namespace std;
int main()//reverse of a no.
{
    int n,r,ans=0;
    cout<<"Enter the number to reversed:-"<<endl;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        ans=ans*10+r;
        n=n/10;
    }
    cout<<ans<<endl;
    return 0;
}// see practice for another method
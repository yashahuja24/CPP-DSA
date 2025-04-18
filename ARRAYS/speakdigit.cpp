#include<iostream>
using namespace std;
inline int revnum(int n);
int main()
{
    int n,r,c=1;
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout<<"Enter Number: ";
    cin>>n;
    n=revnum(n);
    while(n>0)
    {
        r=n%10;
        cout<<arr[r]<<" ";
        n/=10;
    }
}
inline int revnum(int n)
{
    int r,ans=0;
    while(n>0)
    {
        r=n%10;
        ans=(ans*10)+r;
        n/=10;
    }
    return ans;
}
#include<iostream>
using namespace std;
void SayDigit(int n);
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    SayDigit(n);
    return 0;
}
void SayDigit(int n)
{
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    if(n==0)
    {
        return;
    }
    else
    {
        int ans=n%10;
        n/=10;
        SayDigit(n);
        cout<<arr[ans]<<" ";
        return;
    }
}
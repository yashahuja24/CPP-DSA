#include<iostream>
using namespace std;
int main()
{
    int n,bit,one=0,zero=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0)
    {
        bit=n&1;
        if(bit==1)
        {
            one++;
        }
        else
        {
            zero++;
        }
        n/=2;
    }
    cout<<"One bit: "<<one<<endl;
    cout<<"Zero bit: "<<zero;
    return 0;
}
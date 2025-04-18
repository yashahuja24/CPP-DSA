#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0;
    cout<<"Enter the Decimal Number: ";
    cin>>n;
    while(pow(2,i)<=n)
    {
        i++;
    }
    cout<<"Number of Binary Bits: "<<i<<endl;
    return 0;
}
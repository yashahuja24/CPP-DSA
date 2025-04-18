#include<iostream>
#include<math.h>
using namespace std;
int binarytodecimal(int n);
int decimaltobinary(int n);//thier is a compiler problem in this VScode for odd numbers till 7,this code works fine in dev cpp
int main()
{
    int n,num;
    cout<<"Enter Binary Number: ";
    cin>>n;
    binarytodecimal(n);
    cout<<"Enter Decimal Number: ";
    cin>>num;
    decimaltobinary(num);
    return 0;
}
int binarytodecimal(int n)
{
    int r,ans=0,i=0;
    while(n>0)
    {
        r=n%10;//r is updated in every loop;
        ans+=(r*pow(2,i));
        n=n/10;
        i++;
    }
    cout<<"Decimal Number: "<<ans<<endl;
    return 0;
}
int decimaltobinary(int n)//this code works fine in dev c++ , its gives wrongoutput for 5 and 7 in VScode
{
    int ans=0,bit,i=0;
    while(n>0)
    {
        bit = n & 1;
        ans+=(bit*pow(10,i));//using this formula to reverse the number, 10 power i is shifting places to get binary number
        n/=2;//right shift operator can also be used(>>1) it divides by 2;
        i++;//increasing power of 10
    }
    cout<<"Binary Number: "<<ans;
    return 0;
}
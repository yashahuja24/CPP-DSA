#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
int power(int n);
int AP(int n);
int main()//reverse number in range
{
    int n,r,ans=0,num,k,numb;
    cout<<"Enter the Number: ";
    cin>>n;
    while(n>0)
    {
        if((ans>INT_MAX/10)||(ans<INT_MIN/10))
        {
           return 0;
        }
        r=n%10;
        ans=(ans*10)+r;
        n=n/10;
    }
    cout<<"Reversed Integer: "<<ans<<endl;
    cout<<"Enter Number to check Power: ";
    cin>>num;
    k=power(num);
    if(k==num)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    cout<<"Enter number for AP: ";
    cin>>numb;
    AP(numb);
    return 0;
}
int power(int n)
{
    int i=0,r,k;
    while(n>0)
    {
        r=n%2;
        if(r==0)
        {
            i++;
        }
        if(r!=0)
        {
            break;
        }
        n=n/2;
    }
    if(i>0)
    {
        cout<<"Power: "<<i<<endl;
    }
    k=pow(2,i);
    if(k>INT_MAX || k<INT_MIN)
    {
        return 0;
    }
    return k;
}
int AP(int n)
{
    int ans;
    ans=3*n+7;
    cout<<"Term: "<<ans;
    return ans;
}
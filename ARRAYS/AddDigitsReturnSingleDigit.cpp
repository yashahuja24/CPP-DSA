#include<iostream>
using namespace std;
int sum(int num);
int main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<"ANSWER: "<<sum(num);
    return 0;
}
int sum(int num)
{
    int ans=0;
    while(num!=0)
    {
        int r=num%10;
        ans+=r;
        num/=10;
    }
    if(ans<10)
    {
        return ans;
    }
    else
    {
        return sum(ans);
    }
    return 0;
}
/*
  agr num ka sum single digit hai toh return krdo , agr double digit hai toh unn dono ka sum nikaldo jb tk single 
  digit nahi aata chlte rho
*/
#include<iostream>
using namespace std;
int stairs(int n);
int main()
{
    int n;
    cout<<"Enter Number of Stairs: ";
    cin>>n;
    cout<<stairs(n);
    return 0;
}
int stairs(int n)
{
    if(n<0)
    {
        return 0;
    }
    else if(n==0)
    {
        return 1;
    }
    else if(n>0 && n<=3)
    {
        return n;
    }
    else
    {
       int ans=stairs(n-1)+stairs(n-2);
       return ans;
    }
}
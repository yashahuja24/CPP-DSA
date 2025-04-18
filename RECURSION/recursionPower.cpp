#include<iostream>
using namespace std;
int power(int n,int p);
int main()
{
    int n,p;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Enter Power: ";
    cin>>p;
    cout<<"Answer: "<<power(n,p);
    return 0;
}
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    else
    {
        int ans;
        ans=n*power(n,p-1);
        return ans;
    }
}
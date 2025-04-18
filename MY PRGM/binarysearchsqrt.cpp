#include<iostream>
using namespace std;
int BSsqrt(int n);
float precise(int n,float tempsol);
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    if(n==0 || n==1)
    {
        cout<<"The Square Root is: "<<n<<endl;
        return 0;
    }
    float tempsol=BSsqrt(n);
    float ans=precise(n,tempsol);
    cout<<"The Square Root is: "<<ans<<endl;
    return 0;
}
int BSsqrt(int n)
{
    int start=0,end=n,mid;
    int ans;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid<n)
        {
            start=mid+1;
            ans=mid;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans;
}
float precise(int n,float tempsol)
{
    if(tempsol*tempsol==n)
    {
        return tempsol;
    }
    float factor=1;
    int decimal;
    cout<<"Enter Decimal Places: ";
    cin>>decimal;
    for(int i=0;i<decimal;i++)
    {
        factor/=10;
        for(float j=tempsol;j*j<=n;j+=factor)
        {
            tempsol=j;
        }
    }
    return tempsol;
}
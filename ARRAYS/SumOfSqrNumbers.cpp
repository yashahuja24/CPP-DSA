#include<iostream>
#include<math.h>
using namespace std;
bool ans(int n);
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    if(ans(n))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}
bool ans(int n)//Time Complexity O(n)
{
    int i=0,j=n-1,sum;
    while(i<=j)
    {
        sum=pow(i,2)+pow(j,2);
        if(sum==n)
        {
            cout<<i<<" "<<j<<endl;
            return true;
        }
        else if(sum<n)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}
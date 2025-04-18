#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int h,b,p,ans;
    cout<<"Enter the value of Hypotaneous:-"<<endl;
    cin>>h;
    cout<<"Enter the other two sides:-"<<endl;
    cin>>p>>b;
    ans=sqrt(pow(p,2)+pow(b,2));
    if(ans==h)
    {
        cout<<"Pythagorean Triplet";
    }
    else
    {
        cout<<"Not a Pythagorean Triplet";
    }
    return 0;
}
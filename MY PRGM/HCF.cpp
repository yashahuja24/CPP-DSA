#include<iostream>
using namespace std;
int main()
{
    int a,b,r;
    cout<<"Enter value of First Number: ";
    cin>>a;
    cout<<"Enter value of Second Number: ";
    cin>>b;
    if(a>b)//for this algorithm b must be greater so we are swaping values if the user enter a>b
    {
        swap(a,b);
    }
    while(a>0)//Algorithm
    {
        r=b%a;
        b=a;
        a=r;
    }
    cout<<"HCF of given two numbers is: "<<b;
    return 0;
}
#include<iostream>
using namespace std;
inline int add(int a,int b);//using inline functin to reduce ram
int main()
{
    int a,b;
    cout<<"Enter 2 numbers to add: ";
    cin>>a>>b;
    cout<<"Sum of Two numbers is: "<<add(a,b);
}
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
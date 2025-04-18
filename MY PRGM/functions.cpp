#include<iostream>
using namespace std;
int add(int num1, int num2);//function declaration
int sum(int n);
int main()//basic example of functions
{
    int a,b,n;
    cout<<"Enters the values:-"<<endl;
    cin>>a>>b;
    cout<<"Sum of entered numbers is: "<<add(a,b)<<endl;//function call
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    cout<<"Sum of first n natural numbers is:-"<<sum(n);
    return 0;
}
int add(int num1,int num2)//function definition
{
    int sum;
    sum=num1+num2;
    return sum;
}
int sum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
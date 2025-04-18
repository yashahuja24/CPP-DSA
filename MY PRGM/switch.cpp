#include<iostream>
using namespace std;//simple calculator
int main()
{
    int a,b;
    float result;
    char op;
    cout<<"Enter the two numbers and the operator:-\n";
    cin>>a>>b>>op;
    switch(op)
    {
        case '+': result=a+b;
        break;
        case '-': result=a-b;
        break;
        case '*': result=a*b;
        break;
        case '/': result=a/b;
        break;
        case '%': result=a%b;
        break;
        default : cout<<"Invalid operation\n";
    }
    cout<<"The value is "<<result;
    return 0;
}
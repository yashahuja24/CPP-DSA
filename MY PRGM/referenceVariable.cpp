#include<iostream>
using namespace std;//same memory different names
void update(int &a);
int main()
{
    int i=5;
    //creating a reference variable(1 address with 2 variables)
    int &j=i;//now i and j are pointing to same address
    cout<<"Value at i: "<<i<<endl;
    cout<<"Value at j: "<<j<<endl;
    i++;//incrementing i
    cout<<"Updated value of i: "<<i<<endl;//value will be same becz now 1 address of two variable names
    cout<<"Updated value of j: "<<j<<endl;
    j++;
    cout<<"Updated value of i: "<<i<<endl;//j and i can both access to the value at that address now
    cout<<"Updated value of j: "<<j<<endl;
//reference variable with functions
    int a=5;
    cout<<"Before value of a: "<<a<<endl;
    update(a);
    cout<<"After value of a: "<<a<<endl; 
}
void update(int &b)//b is a reference variable
{
    b+=5;//now b is a reference variable and pointing to the address of a
}
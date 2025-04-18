#include<iostream>
using namespace std;
int num=10;//it is globally declared and can be used by any function
void a();
void b();
int main()
{
    cout<<"Value in main function: "<<num<<endl;//it can be updated by any function
    a();
    b();
    return 0;
}
void a()
{
    cout<<"Value in a function: "<<num<<endl;
}
void b()
{
    cout<<"Value in b function: "<<num<<endl;
}
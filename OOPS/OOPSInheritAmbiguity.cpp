#include<iostream>
using namespace std;
class A//if two or more func have same name in diff classes we use scope resolution operator(::) to remove amgbiguity error
{
    public:
    void func()
    {
        cout<<"In Class A"<<endl;
    }
};
class B
{
    public:
    void func()
    {
        cout<<"In Class B"<<endl;
    }
};
class C:public B,public A
{
    public:
    void name()
    {
        cout<<"In class C"<<endl;
    }
};
int main()
{
    C obj;
    obj.A::func();
    obj.B::func();
    obj.name();
    return 0;
}
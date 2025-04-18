#include<iostream>
using namespace std;//just like male and female inherited human in protected code (OOPSInheritprotected.cpp)
class A
{
    public:
    void func1()
    {
        cout<<"Inside Function 1"<<endl;
    }
};
class B:public A
{
    public:
    void func2()
    {
        cout<<"Inside Function 2"<<endl;
    }
};
class C: public A
{
    public:
    void func3()
    {
        cout<<"Inside Function 3"<<endl;
    }
};
int main()
{
    A obj1;
    obj1.func1();

    cout<<endl;
    B obj2;//it can access own class members and inherited class members
    obj2.func1();
    obj2.func2();

    cout<<endl;
    C obj3;
    obj3.func1();//it cannot access class B coz it can only access own class members and inherited class members
    obj3.func3();
    return 0;
}
//obj3 cannot access obj3.func2() because it is heirarchy inheritance and can only access inherited class members;
//hybrid inheritance is inheriting classes by more than one mode like miltiple and heirarchy
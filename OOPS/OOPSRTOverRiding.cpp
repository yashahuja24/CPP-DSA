#include<iostream>
using namespace std;
class Parent
{
    public:
    void func()
    {
        cout<<"I am Parent Class"<<endl;
    }
};
class subclass1:public Parent
{
    public:
    void func()
    {
        cout<<"I am in Sub Class 1 "<<endl;
    }
};
class subclass2:public Parent
{
    public:
    void func()
    {
        cout<<"I am in Sub Class 2"<<endl;
    }
};
int main()
{
    subclass1 obj;
    subclass2 obj1;
    obj.func();
    obj1.func();
    return 0;
}
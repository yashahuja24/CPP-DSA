#include<iostream>
using namespace std;// Operator Overloading
class A
{
    public:
    int a;
    public:
    void operator+ (A &obj)
    {
        int val1,val2;
        val1=this->a;
        val2=obj.a;
        cout<<"Output: "<<val2-val1<<endl;
    }
    void operator()()
    {
        cout<<"Visca ta Leo Messi"<<endl;
    }
    void operator-(A &obj)
    {
        int val1,val2;
        val1=this->a;
        val2=obj.a;
        cout<<"Output: "<<val2+val1;
    }
};
int main()
{
    A obj1,obj2;
    obj1.a=4;
    obj2.a=7;
    obj1 + obj2;
    obj1();
    obj2();
    obj1.a=5;
    obj2.a=5;
    obj1 - obj2;
    return 0;
}
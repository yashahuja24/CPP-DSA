#include<iostream>
using namespace std;//multi level inheritance;
class Animal
{
    protected:
    int age;
    public:
    int get_age()
    {
        return this->age;
    }
    void set_age(int age)
    {
        this->age=age;
    }
    void sleep()
    {
        cout<<"Animal needs to Sleep"<<endl;
    }
};
class Dog: public Animal
{
    public:
    void speak()
    {
        cout<<"Dog barks"<<endl;
    }
};
class Pillu: public Dog
{
    public:
    void love()
    {
        cout<<"Pillu Loves Paneer"<<endl;
    }
};
int main()
{
    Pillu p;
    p.set_age(2);
    cout<<"Pillu Age: "<<p.get_age()<<endl;
    p.speak();
    p.love();
    return 0;
}
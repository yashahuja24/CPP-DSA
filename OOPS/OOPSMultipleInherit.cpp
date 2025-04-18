#include<iostream>
using namespace std;
class Human
{
    protected:
    int age;
    public:
    void H_nature()
    {
        cout<<"Hybrid is Half Human"<<endl;
    }
};
class Animal
{
    protected:
    int health;
    public:
    void A_nature()
    {
        cout<<"Hybrid is Half Animal"<<endl;
    }
};
class Hybrid: public Animal, public Human
{
    public:
    int get_age()
    {
        return this->age;
    }
    int get_health()
    {
        return this->health;
    }
    void set_details(int age,int health)
    {
        this->age=age;
        this->health=health;
    }
    void hybrid_nature()
    {
        cout<<"I am Klaus Mikaelson"<<endl;
    }
};
int main()
{
    Hybrid klaus;
    klaus.set_details(19,100);
    klaus.hybrid_nature();
    cout<<"Hybrid Age: "<<klaus.get_age()<<endl;
    cout<<"Hybrid Health: "<<klaus.get_health()<<endl;
    klaus.H_nature();
    klaus.A_nature();
    return 0;
}
// klaus.H_nature(); If we inherit Human in protected mode we cannot access nature function , coz it is declared in Human
#include<iostream>
using namespace std;
class Human
{
    private:
    string name;
    int weight;
    float height;
    int size;
    public:
    string get_name()//we can also make a constructor but practice :);
    {
        return this->name;//we can aslo write only weight
    }
    int get_weight()
    {
        return this->weight;
    }
    float get_height()
    {
        return this->height;
    }
    void set_details(string name,int weight,float height)
    {
        this->name=name;
        this->weight=weight;
        this->height=height;
    }
};
// single inheritance
class Male: public Human//inherited class as it is accessing in public access modifier, it can access members of Human
{
    private:
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
        cout<<"Humans Need Sleep"<<endl;
    }
};
int main()
{
    Male yash;//now Male variable cvan also access Human members using inheritance
    yash.set_details("Yashvardhan Ahuja",65,6.1);
    yash.set_age(19);
    cout<<"Name: "<<yash.get_name()<<endl;
    cout<<"Age: "<<yash.get_age()<<endl;
    cout<<"Weight: "<<yash.get_weight()<<endl;
    cout<<"Height: "<<yash.get_height()<<" ft"<<endl;
    // cout<<yash.size; cannot access a private member directly while inheriting publicly
    yash.sleep();
    return 0;
}
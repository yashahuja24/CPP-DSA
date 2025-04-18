#include<iostream>
using namespace std;
class student//default constructor
{
    private:
    string name;//members of class
    int rollno;
    float cgpa;
    public:
    student()
    {
        cout<<"Default Constructor"<<endl;
        cout<<"Defualt Address: "<<this<<endl;
    }
    student(int rollno,string name,float cgpa)//when we call this constructore default one dies automatically
    {
        cout<<"Parametrized Constructor Called"<<endl;
        cout<<"this address: "<<this<<endl;
        this->rollno=rollno;
        this->name=name;
        this->cgpa=cgpa;
    }
    void print()
    {
        cout<<rollno<<endl;
        cout<<name<<endl;
        cout<<cgpa<<endl;
    }
};
int main()
{
    student s;//Default constructor
    cout<<"Address of s: "<<&s<<endl;
    student s1(10,"Yashvardhan Ahuja",9.1);//parametrized constructor
    cout<<"Address of s1: "<<&s1<<endl;
    s1.print();//puts parametrized constructor value
    // if we call s.print(),it will give garbage value because s is a default constructor
    return 0;
}
// this keyword reduces code length
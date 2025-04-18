#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll;
    float cgpa;
    public:
    student(string name,int roll,float cgpa)
    {
        this->name=name;
        this->roll=roll;
        this->cgpa=cgpa;
    }
    //copy constructor
    student(student &temp)//ampercent operator is used for reference variable , to avoid copy and infinite loop
    {
        cout<<"Copy Constructor called"<<endl;
        this->name=temp.name;
        this->roll=temp.roll;
        this->cgpa=temp.cgpa;
    }
    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number:"<<roll<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};
int main()
{
    student s("Yashvardhan",53,9.1);
    s.print();
    cout<<endl;
    //copy constructor
    student s1(s);
    s1.print();
    //deepcopy from video
    //create a diff char array to avoid copy in the constructor
    return 0;
}
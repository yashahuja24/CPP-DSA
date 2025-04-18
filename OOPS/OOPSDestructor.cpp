#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int roll;
    float cgpa;
    //constructor calling;
    public:
    static int TimetoComplete;//static data member
    student(string name,int roll,float cgpa)
    {
        this->name=name;
        this->roll=roll;
        this->cgpa=cgpa;
    }
    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<roll<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
    //destructor calling
    ~student()
    {
        cout<<"Destructor Called"<<endl;
    }
};
int student::TimetoComplete=10;// :: is scope resoluction operator
//they can only access static memebers but cannot access object members
int main()
{
    string name;
    int roll;
    float cgpa;
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter Roll Number: ";
    cin>>roll;
    cout<<"Enter CGPA: ";
    cin>>cgpa;
    //static
    student s(name,roll,cgpa);//for static allocation destructor is called automatically
    s.print();
    //dynamic
    student *s1=new student(name,roll,cgpa);//for dynamic allocation
    s1->print();
    delete s1;//deleting memory
    cout<<student::TimetoComplete<<endl;
    return 0;
}
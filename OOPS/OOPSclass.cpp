#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    float cgpa;
};
class employee
{
    public:
    string name;
    int salary;
    void printdetails()//2 way to printdetails;
    {
        cout<<"Name of employee is "<<this->name<<endl<<"Salary of employee is "<<this->salary<<" Dollars"<<endl;//this keyword
    }
};
int main()
{
    student yash;
    yash.name="Yashvardhan";
    yash.roll=53;
    yash.cgpa=9.8;
    cout<<"Name of the student is "<<yash.name<<endl<<"Roll No. of student is "<<yash.roll<<endl<<"CGPA of student is "<<yash.cgpa<<endl;
     cout<<"-------------------------------------------\n";
    employee emp;
    emp.name="Yash Ahuja";
    emp.salary=250000;
    emp.printdetails();
    return 0;
}
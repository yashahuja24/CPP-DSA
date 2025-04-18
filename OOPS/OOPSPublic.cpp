#include<iostream>
using namespace std;//structures ka bada bhai class hoti hai;
class student
{
    public://public class members can be accessed inside and outside the class
    string name;//members of class
    int rollno;
    float cgpa;
};
int main()
{
    student s;//now s is a object of class student , or structure variable;
    cout<<"Enter Name: ";
    getline(cin,s.name);
    cout<<"Enter Roll Number: ";
    cin>>s.rollno;
    cout<<"Enter CGPA: ";
    cin>>s.cgpa;
    cout<<"Detail of Student:-"<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll Number: "<<s.rollno<<endl;
    cout<<"CGPA: "<<s.cgpa<<endl;
    return 0;
}
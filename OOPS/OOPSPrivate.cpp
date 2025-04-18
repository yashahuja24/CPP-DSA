#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int rollno;
    float cgpa;
    public:
    string getName()
    {
        return name;
    }
    int getRollno()
    {
        return rollno;
    }
    float getCgpa()
    {
        return cgpa;
    }
    void setDetails(string n,int roll,float c)//easy method , rather than setting every single variable
    {
        name=n;
        rollno=roll;
        cgpa=c;
    }
};
int main()
{
    student yash;
    string name;
    int rollno;
    float cgpa;
    cout<<"Enter Name: ";
    getline(cin,name);
    cout<<"Enter Roll Number: ";
    cin>>rollno;
    cout<<"Enter CGPA: ";
    cin>>cgpa;
    yash.setDetails(name,rollno,cgpa);
    cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Details:-"<<endl;
    cout<<"Stduent Name: "<<yash.getName()<<endl;
    cout<<"Student Roll Number: "<<yash.getRollno()<<endl;
    cout<<"Student CGPA: "<<yash.getCgpa()<<endl;
    cout<<sizeof(student)<<endl;//tells the size of class(student);
    return 0;
}
/*
to access the private variables we need to make getter and setter functions in public 
as same class can access the private variables , so we can access pribvate members by getter an setter functions
*/
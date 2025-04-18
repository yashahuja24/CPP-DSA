#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int rollno;
    float cgpa;
    public:
    static int TimetoComplete;
    string getname()
    {
        return name;
    }
    int getroll()
    {
        return rollno;
    }
    float getcgpa()
    {
        return cgpa;
    }
    void setdetails(string n,int roll,float c)
    {
        name=n;
        rollno=roll;
        cgpa=c;
    }
};
int main()
{
    student *s1=new student;//allocating dynamically
    string name;
    int roll;
    float c;
    cout<<"Enter Name of Student: ";
    getline(cin,name);
    cout<<"Roll Number: ";
    cin>>roll;
    cout<<"Enter CGPA: ";
    cin>>c;
    s1->setdetails(name,roll,c);
    cout<<"DETAILS:-"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Name of Student: "<<s1->getname()<<endl;// -> because it is dynamically allocated
    cout<<"Roll Number of Student: "<<s1->getroll()<<endl;//we can alse use (*s1).getroll();
    cout<<"CGPA of Student: "<<s1->getcgpa()<<endl;
    return 0;
}
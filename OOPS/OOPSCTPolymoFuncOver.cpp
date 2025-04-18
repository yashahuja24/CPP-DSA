#include<iostream>
using namespace std;
class A//function overloading can only achieved when their is change in any signature of function , return  type doesnt matter
{
    public:
    void add(int val1,int val2)
    {
        int sum=val1+val2;
        cout<<"Function 1"<<endl;
        cout<<"Sum is: "<<sum<<endl;
    }
    void add(int val1,int val2,int val3)
    {
        int sum=val1+val2;
        cout<<"Function 2"<<endl;
        cout<<"Sum is: "<<sum<<endl;
    }
    void add(string name)//change in argument type can also prevent function overloading
    {
        cout<<"Function 3"<<endl;
        cout<<"My name is: "<<name<<endl;
    }
};
int main()
{
    A obj;
    obj.add(34,35);
    obj.add(5,5,0);
    obj.add("Yashvardhan Ahuja");
    return 0;
}
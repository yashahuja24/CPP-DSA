#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name="Yashvardhan";
    cout<<"My name is "<<name<<endl;
    cout<<"Length of my name is "<<name.length()<<endl;
    cout<<"My nickname is "<<name.substr(0,4)<<endl;
    name="Yashvardhan Ahuja";
    cout<<"My Full Name is: "<<name<<endl;
    cout<<"Length of my full name is: "<<name.length();
    return 0;
}
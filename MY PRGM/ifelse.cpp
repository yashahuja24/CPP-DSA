#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18 && age<90)
    {
        cout<<"You can Vote";
    }
    else if(age>=90)
    {
        cout<<"Invalid age";
    }
    else
    {
        cout<<"You cannot vote";
    }
    return 0;
}
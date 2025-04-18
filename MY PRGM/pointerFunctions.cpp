#include<iostream>
using namespace std;
int update(int *p);
int main()
{
    int value=9;
    int *ptr=&value;
    cout<<"Before value: "<<*ptr<<endl;
    cout<<"Before Address: "<<ptr<<endl;
    update(ptr);
    cout<<"Updated value of ptr: "<<*ptr<<endl;//value can be updated , with functions
    cout<<"Upated Address: "<<ptr<<endl;//but address is never updated in a function (address of p is incremented instead of ptr) 
//we can also pass address of variable as parameter , and can access value with pointer
    update(&value);
    cout<<"Updated value with pointer in function: "<<value<<endl;
    return 0;
}
int update(int *p)
{
    *p=*p+1;
    p=p+1;
    return 0;
}
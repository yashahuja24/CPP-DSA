#include<iostream>
using namespace std;
void updateaddress(int **p);
void updatevalue(int **p);
void updatedoublevalue(int **p);
int main()
{
//intalizing a double pointer
    int a=10;
    int *ptr=&a;
    int **pptr=&ptr;
    cout<<**pptr<<endl;//now pptr can also access to value of a
//accessing value of a
    cout<<"Value at a: "<<a<<endl;
    cout<<"Value at a: "<<*ptr<<endl;
    cout<<"Value at a: "<<**pptr<<endl;
//accessing address of a
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Address of a: "<<ptr<<endl;//ptr stores the address of a
    cout<<"Address of a: "<<*pptr<<endl;//value at address of ptr(which stores the address of a)
//accessing address of ptr
    cout<<"Address of ptr: "<<&ptr<<endl;
    cout<<"Address of ptr: "<<pptr<<endl;//stores the address of ptr
//accessing address of pptr
    cout<<"Adress of pptr: "<<&pptr<<endl;
//accessing value at pptr
    cout<<"Value at pptr: "<<*pptr<<endl;//points to the address of a , pptr points to ptr which stores address of a
    cout<<"Value at a with pptr: "<<**pptr<<endl;//points to the value of a
//double pointer with functions
    cout<<"Before value a: "<<a<<endl;//value at a will be printed
    cout<<"Before value of *ptr: "<<ptr<<endl;//address of a will be printed
    cout<<"Before value of **pptr"<<pptr<<endl;//address of ptr will be printed

    cout<<"ONLY CALL ONE FUNCTION AT A TIME\nAS updatevalue function is chaning the pointing address of ptr, (*p=*p+1)"<<endl;


    updateaddress(pptr);//nothing will be changed with this function
    cout<<"After value a: "<<a<<endl;//value at a will be printed
    cout<<"After value of *ptr: "<<ptr<<endl;//address of a will be printed
    cout<<"After value of **pptr"<<pptr<<endl;//address of ptr will be printed
    cout<<"UPDATING THROUGH SINGLE ASTRIC:-"<<endl;
    //updatevalue(pptr);//value at ptr will be updated, as we are updating value at pptr , (*p=*p+1);
    cout<<"After value a: "<<a<<endl;
    cout<<"After value of *ptr: "<<ptr<<endl;//this value is changed
    cout<<"After value of **pptr"<<pptr<<endl;
    cout<<"UPDATING THROUGH DOUBLE ASTRIC:-"<<endl;
    //updatedoublevalue(pptr);//value of a will be updated , as we are updating value of pptr with double pointer,(**p=**p+1)
    cout<<"After value a: "<<a<<endl;//value of a will be changed
    cout<<"After value of *ptr: "<<ptr<<endl;
    cout<<"After value of **pptr: "<<pptr<<endl;
    return 0;
}
void updateaddress(int **p)
{
    p=p+1;//nothing will change with this, becz address can never be updated with function
}
void updatevalue(int **p)
{
    *p=*p+1;//as we are passing double pointer,so it is pointing to the value at address of single pointer
    //so ptr value will be updated with this function   
}
void updatedoublevalue(int **p)
{
    **p=**p+1;//as we are passing double pointer,so now it is pointing to the value of a in main function
    //value of a will be updated in main function , as **pptr is passed and pointing to the value of a
}
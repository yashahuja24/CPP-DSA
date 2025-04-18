#include<iostream>
using namespace std;
int main()
{
//void pointer
    int a=5;
    void *vp=&a;
    cout<<*(int*)vp<<endl;//typecasting void pointer
//null Pointer
    int b=7;
    int *ptr=NULL;//pointer pointing to NULL or 0 is Null pointer
    cout<<ptr<<endl;//this returns 0 as we are storing null location in ptr;
    //cout<<*ptr<<endl;//this will not return anything as the value at ptr is null , and it will terminate the program
//Dangling Pointer
    cout<<"It is hanging pointer"<<endl;
    int *ptr1;
    {
        int c=8;
        ptr1=&c;
        cout<<*ptr1<<endl;
    }
    cout<<*ptr1<<endl;//now it is dangling pointer , because we are accessing c out of its scope
    cout<<"When a pointer points to a variable which is freed , it is known as dangling ptr"<<endl;
//wild pointer
    cout<<"When a pointer is unassigned it is known as Wild pointer"<<endl;
    int *ptr2;//it is a wild pointer because it is unassigned or unintialised
    cout<<*ptr2<<endl;//it is a wild pointer, becaues it is pointing to a random address
    return 0;
}
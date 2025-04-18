#include<iostream>
using namespace std;
int main()
{
    char ch[6]="abcde";
    char *c=ch;
    cout<<ch<<endl;//ch is a char array , and it prints whole string rather than printing address
//this is not integer array, it wont give address ,if we want to print address we must use ampersent(&)
    cout<<"Value at c:"<<c<<endl;
    cout<<"Address of ch: "<<&ch<<endl;//address of char array
    cout<<"Address of c: "<<&c<<endl;
    cout<<"Value at c: "<<*c<<endl;//now it points to the first index of char array, but if we remove '*', it will print till null char
//incrementing char pointer
    cout<<"Pointer arithmetic: "<<*c+1<<endl;//points to the ascii value
    cout<<"Decrementing Ascii: "<<*c-1<<endl;//As c points to a and its ascii value is 97 , if we decrement , 96 is returned
    cout<<*(c+1)<<endl;//moves to the second index in char array
//*c is staring from 'a' , as mentioned in array , now if we increment *c it will increment ascii value from the value of a 
    *c+=9;//it is incrementing Ascii value , and returning value at that particular ascii number
    cout<<"Playing with Ascii values: "<<*c<<endl;//returns value at ascii value of a(97)+9 , which is j
    cout<<*c+9<<endl;//incrementing ascii value after j now, it will return ascii value
    return 0;
}
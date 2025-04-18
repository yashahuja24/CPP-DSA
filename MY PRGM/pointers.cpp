#include<iostream>
using namespace std;
int main()
{
   int num=10;
   int *ptr=&num;//saving address of num into pointer ptr , ptr is pointing to address of num and address of num is stored in ptr
   cout<<"Adress of num: "<<ptr<<endl;//it will return  the num address , as address of num i sstored in address
   cout<<"Value: "<<*ptr<<endl;//this '*' operator points to the value at pointer ptr
   cout<<"Address of ptr: "<<&ptr<<endl;//this "&" operator return the address of variable ,so it will print address of PTR;
   cout<<"Adress of num: "<<&num<<endl;//this will return the address of num , same as ptr=&num
//incrementing and decrementing values
   cout<<"Value of Num before incrementing: "<<*ptr<<endl;
   (*ptr)++;
   cout<<"After Increment: "<<*ptr<<endl;//if we increment *p it is incremneting value num which is ptr pointing to
//copying a pointer
   int *q=ptr;//we are copying the value of ptr to q
   cout<<"Value at q: "<<*q<<endl;
   (*q)++;//incrementing q
   cout<<"Value at q after incrementing: "<<*q<<endl;//so now ptr is copied to q , now q is also accessing num;
//pointer arithmetic
   int i=5;
   int *p=&i;
   cout<<"Value of i: "<<(*p)++<<endl;//we must use brackets;
//size of a pointer variable and normal variable; Max sizeof  a pointer variabl is always 8
   cout<<"Size of pointer variable: "<<sizeof(ptr)<<endl;
   cout<<"Size of normal variable: "<<sizeof(i)<<endl;
   return 0;
}
//'*' points to value at which pointer is pointing
//"&"points to the address of variable
//ptr points to the address of variable which is pointing to
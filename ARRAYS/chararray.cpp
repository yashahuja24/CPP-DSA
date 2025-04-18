#include<iostream>
using namespace std;//Char array are immutable , but its indexes is mutable(can be updated)
int main()
{
   char name[20];
   int count=0;
   cout<<"Enter your name: ";
   cin>>name;
   cout<<"Length of Name is: ";
   for(int i=0;name[i]!='\0';i++)
   {
      count++;
   }
   cout<<count;
   return 0;
}
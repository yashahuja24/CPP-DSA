#include<iostream>
using namespace std;
#define AREA(l , b) (l * b)
#define ELE 1, \//multi line macro
            2, \
            3
#define pi 3.14//macro , it cannot be updated
int area();
int elements();
int main()//a piece of code which i replaced by value of macro
{
    float r;
    cout<<"Radius of circle is: ";
    cin>>r;
    float carea=pi*r*r;
    cout<<"Area of circle is: "<<carea<<endl;
    area();
    elements();
    return 0;
}
int area()
{
    float l1,l2;
    cout<<"Enter length and bredth: ";
    cin>>l1>>l2;
    float area=AREA(l1,l2);
    cout<<"Area of Rectangle is: "<<area<<endl;
    return 0;
}
int elements()
{
    int arr[]={ELE};
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
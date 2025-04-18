#include<iostream>
#include<array>//we must declare array library to access Array STL functions
using namespace std;//we must make the STL container in order ot use the STL functions
int main()
{
//declaring STL Array
    array<int,5>arr={1,2,3,4,5};
    array<int,5>ar={5,4,3,2,1};//intializing STL Array
    array<int,5>arra;
    cout<<"Enter value in our STL array:-"<<endl;
//inputing values in stl array
    for(int i=0;i<arra.size();i++)
    {
        cin>>arra[i];
    }
    cout<<"Given array:-"<<endl;
    for(int i=0;i<arra.size();i++)
    {
        cout<<arra[i]<<" ";
    }
//Using STL builtin functions
    cout<<endl<<arr.size()<<endl;//returns size of array
    cout<<arr.max_size()<<endl;
    cout<<"Empty or Not: "<<arr.empty()<<endl;//returns boolean value true(1)(array is empty) , false(0)(array is not empty)
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<arr.at(3)<<endl;
    cout<<"FIRST ARRAY BEFORE SWAPING:-"<<endl;
    for(auto i=arr.begin();i<arr.end();i++)// we can also use int *i to declare pointr ITERATOR
    {
        cout<<*i<<" ";
    }
    cout<<endl;
//Swaping 2 array value with builtin functions without using for loop
    arr.swap(ar);//swaps array
    cout<<"FIRST ARRAY AFTER SWAPING:-"<<endl;
//Using iterators STL to triverse through Array while using arr.begin(), we must use pointer variable to access elements
    for(auto i=arr.begin();i<arr.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\nSECOND ARRAY AFTER SWAPING:-"<<endl;
    for(int *i=ar.begin();i<ar.end();i++)//we can also use auto keyword(it will generate a int data type pointer variable acc to value)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
//Using fill function to fill a particular integer in an array
    arr.fill(10);//can only fit 1 integer at a time
    for(auto i=arr.begin();i<arr.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
//this indicates to the address of array from where it is starting, (0th index), returns address of 0 index
    cout<<"Address of Array: "<<arr<<endl;
    cout<<&arr<<endl;//this also points at the starting index of array
    cout<<&arr[0]<<endl;
//value at index [0] ,as arr points to starting location of array;
    cout<<"Value of Array: "<<*arr<<endl;
//playing with pointers
    cout<<"Value: "<<*arr+1<<endl;//It is computed as , value at arr and now adding 1 to that value
    cout<<"Value at arr+1: "<<*(arr+1);//it is computed as, value at (0+1 index), in the sense it  is incrementing loctaion not value
    cout<<endl;
    cout<<"Incrementing array: "<<arr+1<<endl;//gives Address of arr+1 index i.e. arr[1]
    cout<<"Address of index 1"<<&arr[1]<<endl;
    cout<<"Incrementing address of array: "<<&arr+1;//this is going out of the array , pointing to value after last location
    cout<<endl;
/*formula of how the compiler works in pointer array
arr[i]=*(arr+i) , RHS indicates value at array staring index plus i value , so it indicates the Ith value in the array
*/
   cout<<"Value at index 3 is: "<<*(arr+3)<<endl;//it indicates arr[3],but compiler reads it like our formula
//IMPORTANT CONCEPT:-
   int i=3;
   cout<<"Value at index 3 is: "<<i[arr]<<endl;//in compiler it is working with above formula *(i+arr);
//difference between size of array and pointer
    cout<<"Size of arr: "<<sizeof(arr)<<endl;//size of arr is calculated by size of array multiplied by size of datatype
    cout<<"Size of address of arr: "<<sizeof(&arr)<<endl;//size required to store the address
    cout<<"Size of value of arr: "<<sizeof(*arr)<<endl;//depends on datatype
//size of pointers 
    int *ptr=arr;//it is pointing to the starting location of arr
    cout<<"Size of ptr: "<<sizeof(ptr)<<endl;
    cout<<"Size of address of ptr: "<<sizeof(&ptr)<<endl;
    cout<<"Size of value of ptr: "<<sizeof(*ptr)<<endl;
//character pointers
    char ch='a';
    char *p=&ch;//size of character datatype is 1 byte
    cout<<"Size of Char ptr: "<<sizeof(p)<<endl;//size of char pointer is also 4
    cout<<"Size of address of char ptr: "<<sizeof(&p)<<endl;
    cout<<"Size of value of char ptr: "<<sizeof(*ptr)<<endl;
//incrementing pointers in array (can also refer c tutorials for reference)
    cout<<"Incrementing ptr: "<<*ptr++<<endl;//it is postincrement , now in next line the pointer is pointing to the next arr loctaion
    cout<<"Value of incremented pointer: "<<*ptr<<endl;//pointing to the arr+1 index i.e. arr[1]
    cout<<"PreIncrement of ptr: "<<*++ptr<<endl;//first incrementing to the next location , then giving value
    cout<<"Address of ptr+2(address is incrementing): "<<ptr+2<<endl;
    //From the above line: It is pointing to the incremented address from inc. location but resting location is not incremented
    cout<<"Accessing value of array with pointer: "<<ptr[2]<<endl;//pointing to the value of second index,from its loctaion
    cout<<"Value at this incremented address: "<<*ptr+2<<endl;//it is adding 2 to the resting location value
//char pointers
    cout<<"Before Value: "<<*p<<endl;//points to the value of ch
    ch++;
    cout<<"Incremented ch value: "<<*p<<endl;
    return 0;
}
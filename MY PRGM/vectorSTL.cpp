#include<iostream>
#include<vector>//vectors are dynamic arrays , size increase while we put elements in vector;
using namespace std;
void printvector(vector<int> v);
int main()
{
    int n;
    vector<int> v;//it is not specific to enter size of vector because it have dynamic size
    cout<<"Enter Size of Vector: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    printvector(v);
    cout<<"Size of vector is: "<<v.size()<<endl;
//now we are appending a new value in vector as vector is dynamic its size will also increase
    v.push_back(6);//we put values in push_back() function
    cout<<"Size of Vector after appending: "<<v.size()<<endl;
    printvector(v);
//accessing values of vector
    cout<<"Value of vector at index 3 is: "<<v[3]<<endl;
    v.pop_back();
    cout<<"Size of vector after poping the last value is: "<<v.size()<<endl;
    cout<<"New ";
    printvector(v);
// Using different STL functions
    cout<<"Value at Front of vector: "<<v.front()<<endl;
    cout<<"Value at Back of vector: "<<v.back()<<endl;
    v.resize(2);//now size of vector is 2
    cout<<"Size of vector after using resize function: "<<v.size()<<endl;
    cout<<"Capacity of vector is: "<<v.capacity()<<endl;//array size if doubled if we append the value , so it returns 8
    v.clear();//clearing the vector data
    v.push_back(1);
    v.push_back(2);
    printvector(v);
    cout<<"Vector size after clearing: "<<v.size()<<endl;
    v.shrink_to_fit();//shrinking capacity of vector(so now storage is wasted)
    cout<<"Vector capacity after shrinking the vector: "<<v.capacity()<<endl;
//intializing a new vector for itertaive STL
    vector<int>vec;
    int num;
    cout<<"Enter size of Vector: ";
    cin>>num;
    cout<<"Enter elements of Vector:-"<<endl;
    for(int i=0;i<num;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    cout<<"Entered vector is:-"<<endl;
//printing array using STL itertaive functions such as vec.begin()[stores address of 0 index of vec], points to address of 0 index;
    for(auto i=vec.begin();i<vec.end();i++)
    {
        cout<<*i<<" ";
    }
//all the vector STL fucntions are same or similar to array so we can see arraySTL.cpp for all the functions
    return 0;
}
void printvector(vector<int> v)
{
    cout<<"Entered Vector is:-"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
#include<iostream>
using namespace std;//thier is no different libraray for pair , pair is included in iostream
int main()
{
//declaring a pair
    pair<string,int> p;
//Using make_pair() , function to input values in pair
    p=make_pair("Yashvardhan Ahuja",11);
    cout<<"My name is: "<<p.first<<endl;//using "." opertaor to access first value of pair p
    cout<<"My DSATM football team jersey number is: "<<p.second<<endl;
//Can also input values like this instead of using make_pair() function
    pair<string,string> parents={"Praveen Ahuja","Sonia Ahuja"};
    cout<<"Father's Name: "<<parents.first<<endl;
    cout<<"Mother's Name: "<<parents.second<<endl;
//inputing values of pair
    pair<int,float>details;
    cout<<"Enter your Class Roll Number: ";
    cin>>details.first;
    cout<<"Enter your CGPA: ";
    cin>>details.second;
    cout<<"ROLL NO.: "<<details.first<<endl;
    cout<<"CGPA: "<<details.second<<endl;
//pairs can be appended
    details.second=9.9;
    cout<<"Appended CGPA: "<<details.second<<endl;
//Pair array(not useful) but learning intializing and declaration
    pair<int,int>p_array[3];
    p_array[0]={1,2};//stores 2 value(pair values)
    p_array[1]=make_pair(3,4);//intializing other way
    p_array[2]=make_pair(5,6);
    for(int  i=0;i<3;i++)
    {
        cout<<"First Value: "<<p_array[i].first<<" ";//can also input pair array using cin>>p_array[i].first
        cout<<"Second Value: "<<p_array[i].second<<endl;
    }
    return 0;
}
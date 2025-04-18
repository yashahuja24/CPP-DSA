#include<iostream>
using namespace std;
int countOcc(string str,string substr);
int main()
{
    string str;
    cout<<"Enter the String: ";
    getline(cin,str);
    string substr;
    cout<<"Enter the Sub String: ";
    getline(cin,substr);
    cout<<"Count of All the Anagrams of Strnig is: "<<countOcc(str,substr)<<endl;
    return 0;
}
int countOcc(string str,string substr)
{
    int i=0,j=0;
    int n=str.length();
    int k=substr.length();
    return 0;
}
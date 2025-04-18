#include<iostream>
using namespace std;
int main()
{
    string str;
    int n;
    cout<<"Enter Number: ";
    getline(cin,str);
    n=stoi(str);
    int k;
    cout<<"Enter k: ";
    cin>>k;
    int product=1;
    while(k--)
    {
        int r=n%10;
        product*=r;
        n/=10;
    }
    cout<<"Product of Digits is: "<<product<<endl;
    return 0;
}
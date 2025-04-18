#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the String Number: ";
    cin>>str;
    long int n=stoi(str);
    while(n>0)
    {
        int r=n%10;
        if(r%2==1)
        {
            break;
        }
        n/=10;
    }
    cout<<n;
    return 0;
}
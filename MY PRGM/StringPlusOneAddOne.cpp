#include<iostream>
#include<string>
using namespace std;
string plusOne(string str);
int main()
{
    string str;
    cout<<"Enter Number String:-"<<endl;
    cin>>str;
    string s=plusOne(str);
    cout<<s<<endl;
    return 0;
}
string plusOne(string str)
{
    int n=str.length();
    for(int i=n-1;i>=0;i--)
    {
        if(str[i]>='0' && str[i]<'9')
        {
            int num=str[i]-'0';
            num+=1;
            str[i]=num+'0';
            return str;
        }
        str[i]='0';
    }
    string s;//instead of using loop we can intialise the string with all zeroes and set 0th index as 1 CODE:- string s(n+1,'0');
    s[0]='1';
    for(int i=1;i<=n;i++)
    {
        s[i]='0';
    }
    return s;
}
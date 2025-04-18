#include<iostream>
#include<string.h>
using namespace std;
string finalstatus(string str);
int main()
{
    string str;
    cout<<"Enter the String: ";
    getline(cin,str);
    string ans=finalstatus(str);
    cout<<"ANSWER: "<<ans;
    return 0;
}
string finalstatus(string str)
{
    int index=-1;
    int n=str.length();
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==';')
        {
            index=i;
        }
    }
    if(index==-1)
    {
        return str;
    }
    else
    {
       string s=str.substr(index+1,n-1);//both n and n-1 works
       return s;
    }
}
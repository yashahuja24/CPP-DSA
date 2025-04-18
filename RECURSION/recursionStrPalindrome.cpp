#include<iostream>
using namespace std;
bool palindrome(string ch,int i,int j);
int main()
{
    string ch;
    cout<<"Enter the String: ";
    getline(cin,ch);
    int n=ch.length();
    if(palindrome(ch,0,n-1))
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}
bool palindrome(string ch,int i,int j)
{
    if(i>j)
    {
        return 1;
    }
    if(ch[i]!=ch[j])
    {
        return 0;
    }
    else
    {
        return palindrome(ch,i+1,j-1);
    }
}
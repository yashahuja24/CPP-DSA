#include<iostream>
using namespace std;
char tolowercase(char ch);
bool checkpalindrome(char a[],int n);
int main()
{
    int n;
    cout<<"Enter length of String: ";
    cin>>n;
    char a[n];
    cout<<"Enter the string:-"<<endl;
    cin>>a;
    if(checkpalindrome(a,n))
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}
char tolowercase(char ch)//main thing in this program
{
    char temp;
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        temp = ch-'A'+'a';//Logic
        return temp;
    }
}
bool checkpalindrome(char a[],int n)
{
    int i=0,j=n-1,count=0;
    while(i<=j)
    {
        if(tolowercase(a[i])!=tolowercase(a[j]))//passing i and j as arguments.
        {
            return 0;
        }
        else
        {
            i++;
            j--;
        }
    }
    return 1;
}
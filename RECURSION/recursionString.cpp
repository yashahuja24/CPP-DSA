#include<iostream>
using namespace std;
void reverse(string &ch,int i,int j);
int main()//reverse of string
{
    string ch;
    cout<<"Enter the String: ";
    getline(cin,ch);
    int n=ch.length();
    reverse(ch,0,n-1);
    cout<<"Reverse of String:-"<<endl;
    cout<<ch;
    return 0;
}
void reverse(string &ch,int i,int j)
{
    if(i>=j)
    {
        return ;
    }
    else
    {
        swap(ch[i++],ch[j--]);
        return reverse(ch,i,j);
    }
}
#include<iostream>
using namespace std;//question is if 4 vowels come consequently , then print it is hard to prenounce, else easy
int main()
{
    int n,count=0;
    cout<<"Enter String:-"<<endl;
    string s;//can also use char s[n], but u need to define the size of character array then
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            count++;
            if(count>=4)
            {
                break;
            }
        }
        else
        {
            count=0;
        }
    }
    if(count>=4)
    {
        cout<<"Hard to Prenounce";
    }
    else
    {
        cout<<"Easy to Prenounce";
    }
    return 0;
}
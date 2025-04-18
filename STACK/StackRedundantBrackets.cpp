#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool check(string str);
int main()
{
    string str;
    cout<<"Enter the Expression:-"<<endl;
    getline(cin,str);
    if(check(str))
    {
        cout<<"Redundant Brackets Found"<<endl;
    }
    else
    {
        cout<<"No Redundant Brackets Found"<<endl;
    }
    return 0;
}
bool check(string str)
{
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(ch=='(' || ch=='+' || ch=='-'|| ch=='*' || ch=='/' || ch=='%')
        {
            s.push(ch);
        }
        else
        {
            if(ch==')')
            {
                bool isReduldant=true;
                while(s.top()!='(')
                {
                    char top=s.top();
                    if(top=='+' || top=='-' || top=='*' || top=='/' || top=='%')
                    {
                        isReduldant=false;
                    }
                    s.pop();
                }
                if(isReduldant==true)
                {
                    return true;
                }
                s.pop();//removes the opening bracket from the stack
            }
        }
    }
    return false;
}

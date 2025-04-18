#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool checkValid(string str);
int main()
{
    string str;
    cout<<"Enter the String:-"<<endl;
    getline(cin,str);
    if(checkValid(str))
    {
        cout<<"Valid Parenthesis"<<endl;
    }
    else
    {
        cout<<"Not Valid Parenthesis"<<endl;
    }
    return 0;
}
bool checkValid(string str)
{
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(ch=='(' || ch=='{' || ch=='[')
        {
            s.push(ch);
        }
        else
        {
            if(!s.empty())
            {
                char top=s.top();
                if(ch==')' && top=='(' || ch=='}' && top=='{' || ch==']' && top=='[')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if(s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
/*                                           Explanation

    we are only inserting the opening braces from the string now as the ch is on the closing braces top is always on
    opening braces becz we only push opening braces and ch is on closing braces now we compare the index braces
    if same we keep going and pop the element , if stack is empty we return true , else return false
*/
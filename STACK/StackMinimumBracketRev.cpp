#include<iostream>
#include<string>
#include<stack>
using namespace std;
int MinReversal(string str);
int main()
{
    string str;
    cout<<"Enter the Expression:-"<<endl;
    getline(cin,str);
    int ans=MinReversal(str);
    if(ans==-1)
    {
        cout<<"No Bracket Reversal is Needed"<<endl;
    }
    else
    {
        cout<<"Minimum Brackets Reversal are: "<<ans<<endl;
    }
}
int MinReversal(string str)
{

    if(str.length()%2==1)
    {
        return -1;
    }
    stack<char>s;
    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch=='{')
        {
            s.push(ch);
        }
        else
        {
            if(!s.empty() && s.top()=='{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
    int open=0,close=0;
    while(!s.empty())
    {
        if(s.top()=='{')
        {
            open++;
        }
        else
        {
            close++;
        }
        s.pop();
    }
    int ans=(open+1)/2 + (close+1)/2;
    return ans;
}
/*
    in this solution we are popping out the valid expression in string ( {} ) and only keeping the invalid
    expression so we can count the number of minimum reversal, by a formula: a=open ,b=close
    so, (a+1)/2 + (b+1)/2;
*/
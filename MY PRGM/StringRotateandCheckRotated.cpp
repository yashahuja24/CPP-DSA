#include<iostream>
using namespace std;
bool RotateandCheck(string str,string goal);
int main()
{
    string str;
    cout<<"Enter the string:-"<<endl;
    getline(cin,str);
    string goal;
    cout<<"Enter the goal string:-"<<endl;
    getline(cin,goal);
    if(RotateandCheck(str,goal))
    {
        cout<<"String is rotation of goal string"<<endl;
    }
    else
    {
        cout<<"String is not rotation of goal string"<<endl;
    }
    return 0;
}
bool RotateandCheck(string str,string goal)
{
    if(str.length()!=goal.length())
    {
        return 0;
    }
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        count++;
        if(str==goal)
        {
            return 1;
        }
        char last=str.back();
        str.pop_back();
        str=last+str;
    }
    return 0;
}
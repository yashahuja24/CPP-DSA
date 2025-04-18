#include<iostream>
using namespace std;
void maxchar(string a);//This Code is written by me. 
int main()
{
    string a;
    char ch;
    cout<<"Enter The String:-"<<endl;
    cin>>a;
    maxchar(a);
    return 0;
}
void maxchar(string a)
{
    int maxichar=1,count,f;
    char ch;
    for(int i=0;i<a.length();i++)//Time Complexity O(n^2)
    {
        count=1;
        for(int j=i+1;j<a.length();j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(maxichar<count)//we can also do (maxichar<=count) , it will give us last maximum digit
        {
            maxichar=count;
            ch=a[i];
            f=1;
        }
    }
    if(f==1)
    {
        cout<<"Max Char: "<<ch<<endl;
        cout<<"Occurence: "<<maxichar<<endl;
    }
    else
    {
        cout<<"Every Character comes once";
    }
}
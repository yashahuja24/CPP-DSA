#include<iostream>
#include<climits>
#include<string>
#include<map>
using namespace std;// Code written by me
int maxLength(string str);// TIME COMPLEXITY O(N) , SPACE COMPLEXITY O(N)
int main()
{
    string str;
    cout<<"Enter the String: ";
    cin>>str;
    cout<<"Longest Sub String without repeating characters are: "<<maxLength(str);
    return 0;
}
int maxLength(string str)
{
    map<char,bool>m;
    int maxi=INT_MIN;
    int i=0,j=0,n=str.length();
    while(j<n)
    {
        if(m[str[j]]==true)
        {
            while(str[i]!=str[j])//jo dono same the usse false mark kiya and window se bahar kr diya
            {
                m[str[i++]]=false;
            }
            m[str[i++]]=false;//ab jo dono same the usse bhi false mark kr diya
        }
        m[str[j++]]=true;
        maxi=max(maxi,(j-i));//we are not doing(j-i+1) , because we did j++
    }
    return maxi;
}
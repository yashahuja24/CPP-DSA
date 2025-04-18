#include<iostream>
using namespace std;
int main()
{
    string sentence;
    char str[100];
    cout<<"Enter String:-"<<endl;
    getline(cin,sentence);
    int count=0,j=0;
    cout<<"EVEN STRINGS IN SENTENCE:-"<<endl;
    for(int i=0;sentence[i]!='\0';i++)
    {
        str[j++]=sentence[i];
        if(sentence[i]==' ' && count%2==0)//even case count=-1 because it will increment and become 0
        {
            for(int k=0;k<count;k++)
            {
                cout<<str[k];
            }
            count=-1;
            j=0;
            cout<<endl;
        }
        else if(sentence[i]==' ')//odd case
        {
            count=-1;
            j=0;
        }
        count++;
    }
    if(count%2==0)
    {
        for(int k=0;k<count;k++)
        {
            cout<<str[k];
        }
    }
}
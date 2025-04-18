#include<iostream>
using namespace std;
char toLowerCase(char ch);
int main()
{
    int n;
    cout<<"Enter the size of lines: ";
    cin>>n;
    int e=0;
    char ch=65;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(e%2==0)
            {
                cout<<ch<<" ";
            }
            else
            {
                cout<<toLowerCase(ch)<<" ";
            }
            ch++;
            e++;
        }
        if(i%2==1)//only if u wanna match column wise otherwise comment for alternative
        {
            e--;
        }
        cout<<endl;
    }
    return 0;
}
char toLowerCase(char ch)
{
    return ch-'A'+'a';
}
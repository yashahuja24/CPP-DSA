#include<iostream>
using namespace std;
void secondapproach(char name[],int n);
int main()
{
    char name[20];
    int n=0,count=0;
    cout<<"Enter your Name: ";
    cin>>name;
    char myname[20];
    for(int i=0;name[i]!='\0';i++)
    {
        n++;
    }
    for(int i=0;name[i]!='\0';i++)
    {
        myname[i]=name[i];
    }
    cout<<"Length of String is: "<<n<<endl;
    cout<<"Reverse of String is: ";
    for(int i=0;i<(n/2);i++)// reversing the string 
    {
        swap(name[i],name[n-i-1]);
    }
    cout<<name<<endl;
    secondapproach(myname,n);// this is two pointer approach to check a string is palindrome or not
    cout<<endl;
    cout<<"Given String is ";
    for(int i=0;name[i]!='\0';i++)//Brutte Force to check if the string is palindrome or not
    {
        if(name[i]==myname[i])
        {
            count++;
        }
    }
    if(n==count)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}
void secondapproach(char name[],int n)
{
    int i=0,j=n-1,count=0;
    while(i<j)
    {
        if(name[i++]==name[j--])
        {
            count++;
        }
    }
    cout<<"Given String is ";
    if(count==n/2)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}
#include<iostream>
using namespace std;//if you want to use 3 numbers,first find lcm of two numbers and use the lcm with the 3 number
int secondapproach(int a,int b);
int main()//THIS CODE IS WRITTEN BY ME
{
    int a,b,ans=1,n1,n2;
    cout<<"Enter value of First Number: ";
    cin>>a;
    cout<<"Enter value of Second Number: ";
    cin>>b;
    n1=a;
    n2=b;
    cout<<"First Approach:-"<<endl;
    while(a>1 || b>1)
    {
        for(int i=2;i<=a || i<=b;i++)
        {
            if(a%i==0 || b%i==0)
            {
                if(a%i==0 && b%i==0)
                {
                    a/=i;
                    b/=i;
                    ans*=i;
                    i--;//it may divide both again
                }
                else if(a%i==0)
                {
                    a/=i;
                    ans*=i;
                }
                else if(b%i==0)
                {
                    b/=i;
                    ans*=i;
                }
            }
        }
    }
    cout<<"LCM of given two numbers is: "<<ans<<endl;
    secondapproach(n1,n2);
    return 0;
}
int secondapproach(int a,int b)//This is a better approach but this is not written by me
{
    cout<<"Second Approach:-"<<endl;
    int maxi;
    maxi=max(a,b);
    do//this loop must run once(thts why we are using do while loop)
    {
        if(maxi%a==0 && maxi%b==0)
        {
            cout<<"LCM: "<<maxi;
            break;
        }
        else
        {
            maxi++;
        }
    }while(true);
    return 0;
}
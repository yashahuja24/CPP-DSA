#include<iostream>
using namespace std;
void Frontcounting(int n);
void Backcounting(int n);
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    Frontcounting(n);
    cout<<endl;
    cout<<"Back Counting: ";
    Backcounting(n);
    return 0;
}
void Frontcounting(int n)//Head Recursion(Recursive relation is at front)
{
    if(n==0)
    {
        cout<<"Front Counting: ";
        return;
    }
    else
    {
        Frontcounting(n-1);
        cout<<n<<" ";
        return;
    }
}
void Backcounting(int n)//Tail Recursion(Recursive relation is at end)
{
    if(n==0)
    {
        return;
    }
    else
    {
        cout<<n<<" ";
        Backcounting(n-1);
    }
}
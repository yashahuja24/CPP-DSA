#include<iostream>
using namespace std;
int check(int n);
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<"Perfect Number: "<<check(++n);//perdfect number should be greater then the n;
    return 0;
}
int check(int n)
{
    int number=n;
    int r=n%10;
    n/=10;
    int rem=n%10;
    if(r%2==0 && rem%2==1)
    {
        return number;
    }
    else if(r%2==1 && rem%2==0)
    {
        return number;
    }
    else
    {
        number++;//we can aldo pass check(++number);
        return check(number);
    }
}
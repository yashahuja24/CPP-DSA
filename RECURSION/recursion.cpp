#include<iostream>
using namespace std;
void home(int src,int dest);
int main()
{
    int src,dest;
    cout<<"Enter source Value: ";
    cin>>src;
    cout<<"Enter destination Value: ";
    cin>>dest;
    home(src,dest);
    return 0;
}
void home(int src,int dest)
{
    cout<<"Source: "<<src<<" Destination: "<<dest<<endl;
    if(src==dest)
    {
        cout<<"Reached";
        return;
    }
    else
    {
        home(++src,dest);
        return;
    }
}
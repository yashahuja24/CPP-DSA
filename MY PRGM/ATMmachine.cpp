#include<iostream>
using namespace std;
int main()
{
    int total,n;
    cout<<"Enter the total amount in ATM: ";
    cin>>total;
    while(total!=0)
    {
        int amount;
        cout<<"Enter amount: ";
        cin>>amount;
        if(amount>total)
        {
            cout<<"Insufficient balance in ATM"<<endl;
        }
        else
        {
            total=total-amount;
            cout<<"Success"<<endl;
            cout<<"Amount Deducted: "<<amount<<"Rs."<<endl;
        }
    }
    return 0;
}
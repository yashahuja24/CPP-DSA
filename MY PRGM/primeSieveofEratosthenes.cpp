#include<iostream>
using namespace std;// vector<bool>prime(n+1,true), we can also make a vector for this
int main()
{
    int n,count=0;
    cout<<"Enter the Number: ";
    cin>>n;
    int prime[n];//in array automatically elemnts are marked true
    // for(int i=0;i<n;i++)//marking all the values as prime for intitial stage(optional)
    // {
    //     prime[i]=true;
    // }
    //prime[0]=prime[1]=false; it is optional as we are starting from index
    for(int i=2;i<n;i++)//TIME COMPLEXITY O(n * log(log n))
    {
        if(prime[i])
        {
            count++;
            for(int j=2*i;j<n;j=j+i)//we are adding i to the j value(2*i) to mark all the multiples as false 
            {
                prime[j]=false;
            }
            cout<<i<<" ";
        }
    }
    cout<<"\nTheir are "<<count<<" Prime Numbers till Number "<<n;
    return 0;
}
#include<iostream>//use for every library
using namespace std;
int main()
{
    int N,M;
    cout<<"Enter Number of Billing Counters: ";
    cin>>N;
    cout<<"Enter Number of People: ";
    cin>>M;
    int *arr{new int[M]};
    int c=1,k=0;
    for(int i=0;i<M;i++)
    {
        if(k==N)
        {
            c++;
            k=0;
        }
        arr[i]=c;
        k++;
    }
    for(int i=0;i<M;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

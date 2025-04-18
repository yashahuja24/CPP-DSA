#include<iostream>
#include<math.h>
using namespace std;
int main()
{//if length of arr is 2 , both of b arr elements will be 0 , i haven't written the code of it
    int n;
    cout<<"Enter size of ARRAY: ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *B{new int[n]};
    int left,right; 
    for(int i=0;i<n;i++)
    {
        left=arr[i-1],right=arr[i+1];
        if(i==0)
        {
            left=arr[n-1];
        }
        else if(i==n-1)
        {
            right=arr[0];
        }
        B[i]=abs(left-right);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(B[i]^i);
    }
    cout<<sum<<endl;
    return 0;
}
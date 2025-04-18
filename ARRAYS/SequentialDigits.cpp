#include<iostream>
using namespace std;
int checkSequential(int arr[],int &size,int n,int m);
int main()
{
    int n,m,size=0;
    cout<<"Enter the Starting Range: ";
    cin>>n;
    cout<<"Enter the Ending Range: ";
    cin>>m;
    int p=m-n;
    int *arr{new int[p]};
    checkSequential(arr,size,n,m);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int checkSequential(int arr[],int &size,int low,int high)
{
    if(low>=high)
    {
        return 0;;
    }
    int flag=1;
    int num=low;
    while(num>0)
    {
        int r=num%10;
        num/=10;
        int rem=num%10;
        if((r-rem)!=1)
        {
            flag=0;
            return checkSequential(arr,size,low+1,high);
        }
        else if(num/10==0 && num>1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        arr[size++]=low;
    }
    return checkSequential(arr,size,low+1,high);
}
#include<iostream>
#include<climits>
using namespace std;
int books(int arr[],int n);//In this code i used the stratergy divide and conquer , i divided the code and solved it loop by loop
int main()//This code is written by me 
{
    int i,n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the elements of Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    books(arr,n);
    return 0;
}
int books(int arr[],int n)//Time complexity is O(n^2)
{
    int i,j,total[n-1],s1=0;
    for(i=0;i<n-1;i++)
    {
        int s2=0;
        s1+=arr[i];
        for(j=i+1;j<n;j++)
        {
            s2+=arr[j];
        }
        cout<<"S1: "<<s1<<" "<<"S2: "<<s2<<endl;
        for(int k=0;k<=i;k++)
        {
            total[i]=max(s1,s2);
        }
    }
    int minno=INT_MAX;
    for(i=0;i<n-1;i++)
    {
        if(minno>total[i])
        {
            minno=total[i];
        }
    }
    cout<<"Answer: "<<minno<<endl;
    return 0;
}
/*
 In this question we are finding the cases where student is reading maximum number of pages , now we have to find 
 the case , to find the minimum number in that maximum set(total)
*/
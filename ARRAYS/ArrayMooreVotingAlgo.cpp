#include<iostream>
using namespace std;
int MooreAlgo(int *arr,int n);//finding majority element
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=MooreAlgo(arr,n);
    if(ans==-1)
    {
        cout<<"No Majority element exist"<<endl;
    }
    cout<<"Majority Element: "<<ans<<endl;
    return 0;
}
int MooreAlgo(int *arr,int n)
{
    int candidate=-1,count=0;
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            candidate=arr[i];
            count=1;//jab candidate choose kiya hai toh uska bhi toh count increment krna padega
        }
        else if(arr[i]==candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    //Verifying tht it is the majority element
    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==candidate)
        {
            count++;
        }
    }
    if(count>n/2)
    {
        return candidate;
    }
    else
    {
        return -1;
    }
}
/*
this code gives the majority element of the array not the maximum occuring element
for example the size of array is 5 and a element is only coming 2 times 
it is not majority but if it occurs more than half of the size of array then it returns the element

n=5
arr={1,2,3,3,3};
majority=3;

n=5
arr={1,2,3,3,4};
No majority element found;
*/
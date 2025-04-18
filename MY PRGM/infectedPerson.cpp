#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the binary String:-"<<endl;
    getline(cin,s);
    int n=s.length();
    int *arr{new int[n]};
    for(int i=0;i<n;i++)
    {
        arr[i]=s[i]-'0';
    }
    int k;
    cout<<"Enter infection area: ";
    cin>>k;
    int left=-1,right=-1;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            left=0,right=0;
            j=i-1;
            while(left<k && j>=0)
            {
                if(arr[j]==1 || arr[j]==2)
                {
                    break;
                }
                arr[j--]=2;//2 defines tht, this person got infected by his right person
                left++;
            }
            j=i+1;
            while(right<k && j<n)
            {
                if(arr[j]==1)
                {
                    break;
                }
                arr[j++]=2;//2 defines tht, this person got infected by his left person 
                right++;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==2)
        {
            arr[i]=1;
        }
        sum+=arr[i];
    }
    cout<<"TOTAL INFECTED: "<<sum;
}
#include<iostream>
using namespace std;
void subset(int *arr,int n,int d);
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
    int d;
    cout<<"Enter Target Sum: ";
    cin>>d;
    subset(arr,n,d);
    return 0;
}
void subset(int arr[],int n,int d)
{
    int i=0,j=0,start,end,sum=0,flag=0;
    while(j<n)
    {
        sum+=arr[j];
        if(sum<d)
        {
            j++;
        }
        else if(sum==d)
        {
            flag=1;
            start=i;
            end=j;
            break;
        }
        else if(sum>d)
        {
            while(sum!=d)
            {
                sum-=arr[i];
                i++;
                if(sum<d)
                {
                    break;
                }
            }
            if(sum==d)
            {
                flag=1;
                start=i;
                end=j;
                break;
            }
            j++;
        }   
    }
    if(flag==0)
    {
        cout<<"No subarr found"<<endl;
        return;
    }
    for(int k=start;k<=end;k++)
    {
        cout<<arr[k]<<" ";
    }
}
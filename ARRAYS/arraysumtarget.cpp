#include<iostream>
using namespace std;
int sumtarget(int arr[],int n,int target);
int secondapproach(int arr[],int n,int target);//two pointer approach , only works when the array is monotonic
int main()
{
    int n,target;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Target Value: ";
    cin>>target;
    sumtarget(arr,n,target);
    cout<<"Using Second Approach:-"<<endl;
    secondapproach(arr,n,target);
    return 0;
}
int sumtarget(int arr[],int n,int target)//Time complexity O(n^2);
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((arr[i]+arr[j])==target)
            {
                cout<<"First Index: "<<i<<" Second Index: "<<j<<endl;
            }
        }
    }
    return 0;
}
int secondapproach(int arr[],int n,int target)//this approach will only work if the array is monotonic
{
    int i=0,j=n-1;
    while(i<n && j>=0)
    {
        if((arr[i]+arr[j])==target)
        {
            cout<<"First Index: "<<i<<" Second Index: "<<j<<endl;
            i++;
            j++;
            //break;//if we only want one pair we can put break
        }
        else if((arr[i]+arr[j])>target)
        {
            j--;
        }
        else if((arr[i]+arr[j])<target)
        {
            i++;
        }
    }
    return 0;
}
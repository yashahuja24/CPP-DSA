#include<iostream>
using namespace std;
int swapalternative(int arr[],int n);
int swapalternative2(int arr[],int n);
int main()
{
    int i,n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter elements in Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    swapalternative(arr,n);//Time Comeplexity O(n^2)
    //swapalternative2(arr,n); Time Complexity O(n)
    cout<<endl;
    return 0;
}
int swapalternative(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i+=2)//it can also be done with single for loop using swap(a[i],a[i+1]),it will reduce time complexity
    {
        for(j=i+1;j>i;j--)//it takes more time complexity than the 1 loop method
        {
            if(j<n)//it wont move out of the array now
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Swaped Array is:-"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int swapalternative2(int arr[],int n)//it is commented in main function coz 1 function returned swaped array
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<"Swaped array is:-"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
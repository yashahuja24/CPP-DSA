#include<iostream>
using namespace std;
int Isort(int arr[],int n);
int main()
{
    int i,n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter elements of Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Isort(arr,n);
    return 0;
}
int Isort(int arr[],int n)
{
    int i,j;
    for(i=1;i<n;i++)// i loop ignores the first element( 0 element) and then compare ,so it starts from 1 index
    {
        int temp=arr[i];
        for(j=i-1;j>=0;j--)// at the end of the loop j is decremented , so temp value is stored at j+1, first j-1, thats why j+1=temp
        {
            if(temp<arr[j])
            {
                arr[j+1]=arr[j];
            }
            else // if the elements are in correct order , break the loop to check another pair
            {
                break;
            }
        }
        arr[j+1]=temp;//temp is getting stored at j only we are doing j+1 because j got decremented by the loop , j-1+1=j
    }
    cout<<"Sorted Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
int arrayrev(int arr[],int n);
int main()
{
    int i,n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};//new is using heap memory
    cout<<"Enter elements in Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arrayrev(arr,n);
    // IF WE PRINT ARRAY AFTER CALLING THE FUNCTION , REVERSE ARRAY WOULD BE PRINTED.
    return 0;
}
int arrayrev(int arr[],int n)
{
    int i,temp;
    for(i=0;i<(n/2);i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];// we can also use swap function (swap(arr[i],arr[n-i-1]))
        arr[n-i-1]=temp;
    }
    cout<<"Reversed Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
/*
    IN FUNCTIONS ARRAY'S GET UPDATED NOT LIKE VARIABLES
    WHEN WE PASS A VARIABLE IN FUNCTION AND APPLY OPERATIONS IN FUNCTION, VARIABLE VALUE IS NOT CHANGED IN MAIN FUNCTION
    BUT IN ARRAY'S GET UPDATED AFTER WE APPLY OPERATIONS IN ARRAY IN FUNCTION THEY RETURN TO MAIN FUNCTION WITH UPDATED VALUE
*/
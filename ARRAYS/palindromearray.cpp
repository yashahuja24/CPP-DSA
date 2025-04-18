#include<iostream>
using namespace std;
bool checkpalindrome(int arr[],int n);//Using Two pointer approach to check if the array is palindrome or not
int main()
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(checkpalindrome(arr,n))
    {
        cout<<"Array is Palindrome"<<endl;
    }
    else
    {
        cout<<"Array is not Palindrome"<<endl;
    }
    return 0;
}
bool checkpalindrome(int arr[],int n)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        if(arr[i]!=arr[j])
        {
            return 0;
        }
        else
        {
            i++;
            j--;
        }
    }
    return 1;
}
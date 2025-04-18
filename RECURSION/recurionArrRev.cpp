#include<iostream>
using namespace std;
int reverse(int arr[],int i,int j);
bool palindrome(int arr[],int i,int n,int num);//without using 2 pointer , but using 2 ptr approach by 1  element
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
    reverse(arr,0,n-1);
    cout<<"Reverse of Array:-"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(palindrome(arr,0,n-1,n))
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}
int reverse(int arr[],int i,int j)
{
    if(i>=j)
    {
        return 0;
    }
    else
    {
        swap(arr[i++],arr[j--]);
        return reverse(arr,i,j);
    }
}
bool palindrome(int arr[],int i,int n,int num)
{
    if(i>(num/2))
    {
        return 1;
    }
    if(arr[i]!=arr[n])
    {
        return 0;
    }
    else
    {
        i++;
        return palindrome(arr,i,n-i-1,num);
    }
}
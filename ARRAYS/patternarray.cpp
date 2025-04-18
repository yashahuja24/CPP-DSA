#include<iostream>
using namespace std;//0 0 7  should come in order even if it is not continous, not 7 0 0 ,0 7 0
int main()
{
    int n;
    int a[3]={0,0,7};
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]},j=0;
    cout<<"Enter elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a[j])
        {
            j++;
        }
        if(j==3)
        {
            break;
        }
    }
    if(j==3)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}
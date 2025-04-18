#include <iostream>
#include <queue>
#include <climits>
using namespace std;
void maxNum(int arr[],int n,int k);
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the elements of Array:-"<< endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the size of Window: ";
    cin>>k;
    maxNum(arr,n,k);
    return 0;
}
void maxNum(int arr[],int n,int k)
{
    if(k==1)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        return;
    }
    int i=0,j=0;
    queue<int>q;
    while(j<n)
    {
        q.push(arr[j]);
        while(arr[j]>q.front() && !q.empty())
        {
            q.pop();
        }
        if(j-i+1<k)
        {
            j++;
        }
        else if((j-i+1)==k)
        {
            cout<<q.front()<<" ";
            while(arr[i]==q.front() && !q.empty())//now it will move out of the window , so pop it
            {
                q.pop();
            }
            while(arr[j]>q.front() && !q.empty())//greater elements is present so pop it
            {
                q.pop();
            }
            i++;
            j++;
        }
    }
    return;
}
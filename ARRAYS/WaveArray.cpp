#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void waveArray(vector<int>&arr);
void waveArray2(vector<int>&arr);
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    vector<int>arr;
    cout<<"Enter the elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    waveArray(arr);
    // waveArray2(arr);
    cout<<"Wave Pattern Array:-"<<endl;
    for(int num:arr)
    {
        cout<<num<<" ";
    }
    return 0;
}
void waveArray(vector<int>&arr)//O(N)
{
    int n=arr.size();
    for(int i=0;i<n;i+=2)
    {
        if(i>0 && arr[i]<arr[i-1])
        {
            swap(arr[i],arr[i-1]);
        }
        if(i<n-1 && arr[i]<arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    return;
}
void waveArray2(vector<int>&arr)//O(N*log(N))
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i+=2)//logic for swap alternative
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    return;
}
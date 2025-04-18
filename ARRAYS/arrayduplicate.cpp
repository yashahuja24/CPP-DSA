#include<iostream>
#include<vector>
using namespace std;
int duplicate(int arr[],int n);
int Approach2(int arr[],int n);
int twiceoccurence(int arr[],int n);
int main()
{
    int i,n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};//new is using heap memory , not stack memory
    cout<<"Enter elements of Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    duplicate(arr,n);
    twiceoccurence(arr,n);
    Approach2(arr,n);
    return 0;
}
int duplicate(int arr[],int n)//Time Complexity is O(n^2)
{
    int i,j,c;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"Duplicate element: "<<arr[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
int Approach2(int arr[],int n)//elemets of array are 0 to n-1 (limitation)
{
    vector<int>v;//use vector which is better
    for(int i=0;i<n;i++)
    {
        int index=arr[i]%n;
        arr[index]+=n;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]/n>=2)
        {
            v.push_back(i);
        }
    }
    if(v.size()==0)
    {
        cout<<"No duplicate Element Found"<<endl;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<"Duplicate element: "<<v[i]<<endl;
    }
    return 0;
}
int twiceoccurence(int arr[],int n)//hw given in video
{
    int i,j,c;
    for(i=0;i<n;i++)
    {
        c=1;// every element is coming once if c gets incremented (c==2) then twice occurence
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==2)
        {
            cout<<"Twice Occurence: "<<arr[i]<<endl;
        }
    }
    return 0;
}
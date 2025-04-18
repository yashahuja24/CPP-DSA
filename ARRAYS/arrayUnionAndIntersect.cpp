#include<iostream>
#include<vector>
using namespace std;
void unionarr(int arr1[],int n1,int arr2[],int n2);
void intersection(int arr1[],int n1,int arr2[],int n2);
int main()
{
    int n1,n2;
    cout<<"Enter the size of First Array: ";
    cin>>n1;
    int *arr1{new int[n1]};
    cout<<"Enter the elements of First Array:-"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the size of Second Array: ";
    cin>>n2;
    int *arr2{new int[n2]};
    cout<<"Enter the elements of Second Array:-"<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Union of Given Arrays:-"<<endl;
    unionarr(arr1,n1,arr2,n2);
    cout<<"Intersection of Given Arrays:-"<<endl;
    intersection(arr1,n1,arr2,n2);
    return 0;
}
void unionarr(int arr1[],int n1,int arr2[],int n2)
{
    int i=0,j=0;
    vector<int>v;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            v.push_back(arr1[i++]);
        }
        else if(arr1[i]>arr2[j])
        {
            v.push_back(arr2[j++]);
        }
        else if(arr1[i]==arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<n1)
    {
        v.push_back(arr1[i++]);
    }
    while(j<n2)
    {
        v.push_back(arr2[j++]);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
void intersection(int arr1[],int n1,int arr2[],int n2)
{
    int i=0,j=0;
    vector<int>v;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return;
}
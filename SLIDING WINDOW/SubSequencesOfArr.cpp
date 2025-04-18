#include<iostream>
#include<vector>
using namespace std;
void subSeq(vector<int>arr,vector<int>ans,int i);
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr;
    cout<<"Enter the elements of the array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int>ans;
    cout<<"The subsequence of the array are:-"<<endl;
    subSeq(arr,ans,0);
    return 0;
}
void subSeq(vector<int>arr,vector<int>&ans,int i)
{
    if(i>=arr.size())
    {
        for(int j:ans)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);//include number
    subSeq(arr,ans,i+1);
    ans.pop_back();//don't include number
    subSeq(arr,ans,i+1);
}
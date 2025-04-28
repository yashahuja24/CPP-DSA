#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int>TwoSum(int *arr,int n,int target);
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target amount: ";
    cin>>target;
    vector<int> ans=TwoSum(arr,n,target);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
vector<int> TwoSum(int *arr,int n,int target)
{
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        int needed=target-arr[i];
        if(m.find(needed)!=m.end())
        {
            return {i,m[needed]};
        }
    }
    cout<<"No Pair found"<<endl;
    return {};
}
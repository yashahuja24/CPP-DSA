#include<iostream>
#include<vector>
using namespace std;
vector<int>union_ans(vector<int>arr1,vector<int>arr2);
vector<int>inter_ans(vector<int>arr1,vector<int>arr2);
vector<int>diff_ans(vector<int>arr1,vector<int>arr2);
int main()
{
    vector<int>arr1;
    vector<int>arr2;
    int n;
    cout<<"Enter the size of Array 1: ";
    cin>>n;
    cout<<"Enter the elements of Array 1:-"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    int m;
    cout<<"Enter the size of Array 2: ";
    cin>>m;
    cout<<"Enter the elements of Array 2:-"<<endl;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        arr2.push_back(x);
    }
    vector<int>ans_union=union_ans(arr1,arr2);//sorted arrays
    cout<<"Union of given arrays:-"<<endl;
    for(int num:ans_union)
    {
        cout<<num<<" ";
    }
    cout<<endl;
    vector<int>ans_inter=inter_ans(arr1,arr2);//sorted arrays
    cout<<"Intersection of given arrays:-"<<endl;
    for(int num:ans_inter)
    {
        cout<<num<<" ";
    }
    cout<<endl;
    vector<int>ans_diff=diff_ans(arr1,arr2);//sorted arrays
    cout<<"Difference of given arrays:-"<<endl;
    for(int num:ans_diff)
    {
        cout<<num<<" ";
    }
    return 0;
}
vector<int>union_ans(vector<int>arr1,vector<int>arr2)
{
    int i=0,j=0;
    vector<int>ans;
    while(i<arr1.size() && j<arr2.size())
    {
        if(arr1[i]<arr2[j])
        {
            if(ans.empty() || arr1[i]!=ans.back())
            {
                ans.push_back(arr1[i++]);
            }
        }
        else if(arr1[i]>arr2[j])
        {
            if(ans.empty() || arr2[j]!=ans.back())
            {
                ans.push_back(arr2[j++]);
            }
        }
        else
        {
            if(ans.empty() || arr1[i]!=ans.back())
            {
                ans.push_back(arr1[i++]);
                j++;
            }
        }
    }
    while(i<arr1.size())
    {
        if(ans.empty() || arr1[i]!=ans.back())
        {
            ans.push_back(arr1[i++]);
        }
    }
    while(j<arr2.size())
    {
        if(ans.empty() || arr2[j]!=ans.back())
        {
            ans.push_back(arr2[j++]);
        }
    }
    return ans;
}
vector<int>inter_ans(vector<int>arr1,vector<int>arr2)
{
    int i=0,j=0;
    vector<int>ans;
    while(i<arr1.size() && j<arr2.size())
    {
        if(arr1[i]==arr2[j])
        {
            if(ans.empty() || arr1[i]!=ans.back())
            {
                ans.push_back(arr1[i++]);
                j++;
            }
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
    }
    return ans;
}
vector<int>diff_ans(vector<int>arr1,vector<int>arr2)
{
    vector<int>ans;
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size())
    {
        if(arr1[i]<arr2[j])
        {
            if(ans.empty() || arr1[i]!=ans.back())
            {
                ans.push_back(arr1[i++]);
            }
        }
        else if(arr1[i]>arr2[j])
        {
            if(ans.empty() || arr2[j]!=ans.back())
            {
                ans.push_back(arr2[j++]);
            }
        }
        else if(arr1[i]==arr2[j])
        {
            i++,j++;
        }
    }
    while(i<arr1.size())
    {
        if(ans.empty() || arr1[i]!=ans.back())
        {
            ans.push_back(arr1[i++]);
        }
    }
    while(j<arr2.size())
    {
        if(ans.empty() || arr2[j]!=ans.back())
        {
            ans.push_back(arr2[j++]);
        }
    }
    return ans;
}
#include<iostream>
using namespace std;
int uniquenum(int arr[],int n);//if all the elements is occuring twice, and u have to find unique element, then use this method
int uniquenumber(int arr[],int n);//if all the elements are coming more than twice, then use this method to find unique element
int main()
{
    int i,n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter elements of Array:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //uniquenum(arr,n); //use this when every element comes twice except one element.(then this is the best solution);
    uniquenumber(arr,n);
    return 0;
}
int uniquenum(int arr[],int n)//this method has certain disadvantags, thts why its call in main func is commented
{
    int i,ans=0;
    for(i=0;i<n;i++)
    {
        ans=ans^arr[i];//this method teaches about xor bitwise operator thts why it is imp.
    }
    cout<<"The unique element is: "<<ans;
    return 0;
}
int uniquenumber(int arr[],int n)//best method
{
    int i,j,c,d=1;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==0)
        {
            cout<<d<<" Unique element is: "<<arr[i]<<endl;
            d++;
        }
    }
    return 0;
}
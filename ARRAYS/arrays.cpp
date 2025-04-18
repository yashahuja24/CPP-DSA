#include<iostream>
using namespace std;
int array2d(int i,int j);
int main()
{
    int  i,j,marks[10];
    cout<<"Enter marks:-"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>marks[i];
    }
    cout<<"Marks of students are:-\n";
    for(i=0;i<10;i++)
    {
        cout<<marks[i]<<endl;
    }
    cout<<"Example of 2d arrays is:-"<<endl;
    array2d(i,j);
    return 0;
}
int array2d(int i,int j)
{
    int arr[2][2];
    cout<<"Enter value in matrix:-"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return arr[2][2];
}
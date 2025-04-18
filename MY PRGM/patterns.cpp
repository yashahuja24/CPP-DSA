#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    cout<<"First Pattern:-"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Second Pattern:-"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Third Pattern:-"<<endl;
    for(i=1;i<=5;i++)
    {
        for(k=0;k<=(5-i-1);k++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Fourth Pattern:-"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"Fifth Pattern:-"<<endl;
    for(i=5;i>=1;i--)
    {
        for(k=0;k<=(5-i-1);k++)
        {
            cout<<"  ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"Sixth Pattern:-"<<endl;
    int c=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(c%2==0)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }
            c++;
        }
        cout<<endl;
    }
    cout<<"Seventh Pattern:-"<<endl;
    for(i=1;i<=5;i++)
    {
        for(k=0;k<=(5-1-i);k++)
        {
            cout<<"  ";
        }
        for(j=1;j<=5;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Eighth Pattern:-"<<endl;
    for(i=1;i<=5;i++)
    {
        for(k=0;k<=(5-i-1);k++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"Nineth Pattern"<<endl;
    for(i=1;i<=5;i++)
    {
        for(k=0;k<=(5-i-1);k++)
        {
            cout<<"  ";
        }
        for(j=1;j<=(2*i-1);j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=5;i>=1;i--)
    {
        for(k=0;k<=(5-i-1);k++)
        {
            cout<<"  ";
        }
        for(j=(2*i-1);j>=1;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Tenth Pattern:-"<<endl;
    for(i=1;i<=5;i++)
    {
        for(k=0;k<=(5-i-1);k++)
        {
            cout<<"  ";
        }
        for(j=1;j<=(2*i-1);j++)
        {
            if(j==(2*i-1)||j==1||i==5)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(i=5;i>=1;i--)
    {
        for(k=0;k<=(5-i-1);k++)
        {
            cout<<"  ";
        }
        for(j=(2*i-1);j>=1;j--)
        {
            if(j==(2*i-1)||j==1||i==5)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<"Eleventh Pattern:-"<<endl;
    for(i=1;i<=5;i++)
    {
        for(k=0;k<=(5-i-1);k++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(j=i-1;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(i=5;i>=1;i--)
    {
        for(k=0;k<=(5-i-1);k++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(j=i-1;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"Twelfth Pattern:-"<<endl;
    for(i=1;i<=5;i++)
    {
        for(k=0;k<=(5-i-1);k++)
        {
            cout<<"  ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        for(j=2;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(i=5;i>=1;i--)
    {
        for(k=0;k<=(5-i-1);k++)
        {
            cout<<"  ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        for(j=2;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"Thirteenth Pattern:-"<<endl;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(k=1;k<=(2*5-2*i);k++)//for making space in between
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<"* ";
        }
        for(k=1;k<=(2*5-2*i);k++)
        {
            cout<<"  ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Fourteenth Pattrn:-"<<endl;
    for(int i=0;i<5;i++)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<i;j++)
            {
                cout<<"  ";
            }
            cout<<"*";
            cout<<endl;
        }
        for(int i=0;i<1;i++)
        {
            for(int k=0;k<(2-i-1);k++)
            {
                cout<<"  ";
            }
            cout<<"*";
            cout<<endl;
        }
    }
    cout<<"*";
    return 0;
}
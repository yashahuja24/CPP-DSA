#include<iostream>
using namespace std;
int main()
{
    int date,month,year;
    cout<<"Enter Current Date: ";
    cin>>date;
    cout<<"Enter Current Month: ";
    cin>>month;
    cout<<"Enter Current Year: ";
    cin>>year;
    int num;
    cout<<"Enter Number of Days: ";
    cin>>num;
    while(num!=0)
    {
        date+=1;
        if(month==1 || month==3 || month==5 || month==7|| month==8 || month==10 || month==12)
        {
            if(date>31)
            {
                date=1;
                month+=1;
                if(month>12)
                {
                    month=1;
                    year+=1;
                }
            }
        }
        else if(month==2 && year%4!=0)
        {
            if(date>28)
            {
                date=1;
                month+=1;
            }
        }
        else if(month==2 && year%4==0)
        {
            if(date>29)
            {
                date=1;
                month+=1;
            }
        }
        else
        {
            if(date>30)
            {
                date=1;
                month+=1;
            }
        }
        num--;
    }
    cout<<"Date After Entered Days: ";
    cout<<date<<" "<<month<<" "<<year<<endl;
    return 0;
}
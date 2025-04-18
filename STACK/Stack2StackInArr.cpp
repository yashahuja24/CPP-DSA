#include<iostream>
using namespace std;
class TwoStack
{
    public:
    int size;
    int top1,top2;
    int *arr;
    TwoStack(int size)
    {
        this->size=size;
        top1=-1;
        top2=size;
        arr=new int[size];
    }
    void push1(int item)
    {
        if(top2-top1>1)
        {
            arr[++top1]=item;
            return;
        } 
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }
    void push2(int item)
    {
        if(top2-top1>1)
        {
            arr[--top2]=item;
            return;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
    }
    void pop1()
    {
        if(top1>=0)
        {
            top1--;
            return;
        }
        else
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
    }
    void pop2()
    {
        if(top2<size)
        {
            top2++;
            return;
        }
        else
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
    }
    void display()//this was added by me to check, nothing else
    {
        if(top1<0 || top2>=size)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else
        {
            for(int i=0;i<this->size;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            return;
        }
    }
};
int main()
{
    TwoStack ts(10);
    ts.push1(1);
    ts.push1(1);
    ts.push1(1);
    ts.push1(1);
    ts.push1(1);
    ts.push2(2);
    ts.push2(2);
    ts.push2(2);
    ts.push2(2);
    ts.push2(2);
    ts.push2(2);//stack overflow 
    ts.pop1();//popping 1
    ts.pop2();//popping 2
    ts.push1(4);//removing 2 and putting 4 by stack 1;
    ts.push2(3);//removing 1 and putting 3
    ts.display();//this func to demonstate output
    return 0;
}
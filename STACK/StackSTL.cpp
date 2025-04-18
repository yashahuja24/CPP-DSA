#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();//5 is popped
    s.pop();//4 is popped
    cout<<"Top element: "<<s.top()<<endl;//now top element is 3
    s.push(4);
    s.push(5);
    stack<int>s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.swap(s);//swaps ths values of 2 stacks
    cout<<"Stack pushed elements:-"<<endl;//now s1 contains value of s and s contains value of s1;
    while(!s.empty())//to display stack, !s.empty indicates s.empty!=1;
    {
        cout<<s.top()<<endl;
        s.pop();//takes the loop ahead, as the top moves to next element
    }
    return 0;
}
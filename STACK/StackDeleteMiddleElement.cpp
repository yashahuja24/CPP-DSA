#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s,int size,int count);
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int size=s.size();
    int count=0;
    solve(s,size,count);
    int n=s.size();//updated size
    for(int i=0;i<n;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
void solve(stack<int>&s,int size,int count)
{
    if(count==size/2)
    {
        s.pop();
        return;
    }
    int num=s.top();
    s.pop();
    solve(s,size,count+1);
    s.push(num);
}
/*
  dekho seedhi baat hai jb call ke neeeche kuch ho ya backtrack krna ho recursion mei toh return mt likho kyuki wahi se
  wo wps chala jata hai pr like jb koi value return krni ho and after call backtrack nhi krna toh return krlo wrna wo wps 
  backtrack krego jo hume nhi krna 
  return tb kro jb koi after call na ho wrna jaisae abhi wps hume num value dalni thi toh return nhi kiya
  wrna krta kyu ki ab main function ko ya mere function ko updated value chahiye thi
*/
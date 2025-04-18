#include<iostream>
using namespace std;
class Deque
{
    public:
    int n,front,rear,*q;
    Deque(int n)
    {
       this->n=n;
       this->front=-1;
       this->rear=-1;
       q=new int[n];
    }
    bool isEmpty()
    {
        if(rear==-1 && front==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    bool isFull()
    {
        if((rear+1)%n==front)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void pushFront(int x)
    {
        if(isEmpty())
        {
            front=rear=0;
            q[front]=x;
            return;
        }
        else if(isFull())
        {
            cout<<"Double Ended Queue is Full"<<endl;
            return;
        }
        else if(front==0)
        {
            front=n-1;
            q[front]=x;
            return;
        }
        else
        {
            q[--front]=x;
            return;
        }
    }
    void pushRear(int x)
    {
        if(isEmpty())
        {
            front++;
            q[++rear]=x;
            return;
        }
        else if(isFull())
        {
            cout<<"Double Ended Queue is Full"<<endl;
            return;
        }
        else
        {
            rear=(rear+1)%n;
            q[rear]=x;
            return;
        }
    }
    void popFront()
    {
        if(isEmpty())
        {
            cout<<"Double Ended Queue is Empty"<<endl;
        }
        else if(rear==front)
        {
            rear=front=-1;
            return;
        }
        else
        {
            front=(front+1)%n;
            return;
        }
    }
    void popRear()
    {
        if(isEmpty())
        {
            cout<<"Double Ended Queue is Empty"<<endl;
        }
        else if(rear==front)
        {
            front=rear=-1;
            return;
        }
        else if(rear==0)
        {
            rear=n-1;
            return;
        }
        else
        {
            rear--;
            return;
        }
    }
    void getFront()
    {
        if(isEmpty())
        {
            cout<<"Double Ended Queue is Empty"<<endl;
        }
        else
        {
            cout<<q[front]<<endl;
        }
    }
    void getRear()
    {
        if(isEmpty())
        {
            cout<<"Double Ended Queue is Empty"<<endl;
        }
        else
        {
            cout<<q[rear]<<endl;
        }
    }
    void display()
    {
        if(isEmpty())
        {
            cout<<"Double Ended Queue is Empty"<<endl;
            return;
        }
        else
        {
            int i=front;
            while(i!=rear)
            {
                cout<<q[i]<<" ";
                i=(i+1)%n;
            }
            cout<<q[rear]<<endl;
            return;
        }
    }
};
int main()
{
    int n;
    cout<<"Enter the size of Double Ended Queue: ";
    cin>>n;
    Deque dq(n);
    dq.pushRear(1);
    dq.pushFront(2);
    dq.pushRear(3);
    dq.pushFront(4);
    dq.pushRear(5);
    dq.getFront();//4
    dq.getRear();//5
    dq.popFront();
    dq.popRear();
    dq.getFront();//2
    dq.getRear();//3
    dq.display();// 2 1 3, becz it starts with front and end at rear
    return 0;
}
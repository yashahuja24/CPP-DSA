#include<iostream>
using namespace std;
class Queue
{
    public:
    int size,rear,front;
    int *q;
    Queue(int size)
    {
        this->size=size;
        this->front=-1;
        this->rear=-1;
        q=new int[size];
    }
    bool isFull()
    {
        return rear==size-1;
    }
    bool isEmpty()
    {
        return front==-1;
    }
    void enqueue(int d)
    {
        if(isFull())
        {
            cout<<"Queue is Full"<<endl;
            return;
        }
        if(rear==-1 && front==-1)
        {
            q[++rear]=d;
            front++;
        }
        else
        {
            q[++rear]=d;
        }
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        if(front==rear)
        {
            rear=front=-1;
        }
        else
        {
            front++;
        }
    }
    void Size()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        else
        {
            cout<<rear-front+1<<endl;
            return;
        }
    }
    void peek()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        else
        {
            cout<<q[front]<<endl;
            return;
        }
    }
    void display()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        else
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<q[i]<<" ";
            }
            cout<<endl;
            return;
        }
    }
};
int main()
{
    int n;
    cout<<"Enter the size of Queue: ";
    cin>>n;
    Queue q(n);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.Size();
    cout<<"Peek Element: ";
    q.peek();
    cout<<"Queue Element:-"<<endl;
    q.display();
    q.Size();
    q.dequeue();
    cout<<"Queue Element:-"<<endl;
    q.display();
    q.Size();
    q.dequeue();
    cout<<"Queue Element:-"<<endl;
    q.display();
    q.Size();
    q.dequeue();
    cout<<"Peek: ";
    q.peek();
    cout<<"Queue Element:-"<<endl;
    q.display();
    q.Size();
    q.dequeue();
    return 0;
}
#include<iostream>
using namespace std;
class CQueue
{
    public:
    int *q;
    int front,rear;
    int size;
    CQueue(int size)
    {
        this->size=size;
        q=new int[size];
        this->front=-1;
        this->rear=-1;
    }
    void enqueue(int data)
    {
        if(front==-1 && rear==-1)
        {
            front++;
            q[++rear]=data;
            return;
        }
        else if((rear+1)%size==front)
        {
            cout<<"Circular Queue is Full"<<endl;
            return;
        }
        else
        {
            rear=(rear+1)%size;
            q[rear]=data;
            return;
        }
    }
    void dequeue()
    {
        if(front==rear)
        {
            rear=front=-1;
            cout<<"Circular Queue is Empty"<<endl;
            return;
        }
        else
        {
            front=(front+1)%size;
            return;
        }
    }
    void peek()
    {
        cout<<q[front]<<endl;
        return;
    }
    void display()
    {
        int i=front;
        while(i!=rear)
        {
            cout<<q[i]<<" ";
            i=(i+1)%size;
        }
        cout<<q[rear]<<endl;
        return;
    }
};
int main()
{
    int n;
    cout<<"Enter the size of Circular Queue: ";
    cin>>n;
    CQueue q(n);//n=3
    q.enqueue(2);
    q.enqueue(5);
    q.dequeue();
    q.display();//5
    q.enqueue(8);
    q.enqueue(7);
    q.dequeue();
    q.enqueue(10);
    q.display();//8 7 10
    q.peek();//8
    return 0;
}
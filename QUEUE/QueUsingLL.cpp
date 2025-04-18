#include<iostream>
using namespace std;
class Queue
{
    public:
    int data;
    Queue *next;
    Queue *front;
    Queue *rear;
    Queue()
    {
        this->next=NULL;
        this->front=NULL;
        this->rear=NULL;
    }
    bool isEmpty()
    {
        if(front==NULL && rear==NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void enqueue(int d)
    {
        Queue *temp=new Queue();
        temp->data=d;
        if(isEmpty())
        {
            rear=front=temp;//front is head and rear is tail
            return;
        }
        else
        {
            rear->next=temp;//Insert at Tail;
            rear=temp;
            return;
        }
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        else
        {
            front=front->next;//Head(front) moves forward to dequeue
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
            cout<<front->data<<endl;
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
            Queue *temp=front;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
            return;
        }
    }
};
int main()
{
    Queue *q=new Queue();
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->enqueue(5);
    q->enqueue(6);
    cout<<"Display Queue Using LL:-"<<endl;
    q->display();
    q->dequeue();
    q->dequeue();
    cout<<"Display Queue Using LL:-"<<endl;
    q->display();
    cout<<"Peek Element: ";
    q->peek();
    q->dequeue();
    cout<<"Display Queue Using LL:-"<<endl;
    q->display();
    cout<<"Peek Element: ";
    q->peek();
    q->enqueue(7);
    cout<<"Display Queue Using LL:-"<<endl;
    q->display();
    cout<<"Peek Element: ";
    q->peek();
    return 0;
}
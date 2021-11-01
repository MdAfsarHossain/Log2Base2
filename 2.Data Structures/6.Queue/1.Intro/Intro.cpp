#include<iostream>
using namespace std;
#define n 3
int ara[3];
int fron = 0;
int rear = 0;

void enqueue(int val)
{
    if(rear == n)
    {
        cout<<"Queue is Full."<<endl;
    }
    else
    {
        ara[rear] = val;
        rear++;
    }
}

void dequeue()
{
    if(fron == rear)
    {
        cout<<"Queue is Empty."<<endl;
    }
    else
    {
        cout<<"Dequeued element = "<<ara[fron]<<endl;
        fron++;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
}

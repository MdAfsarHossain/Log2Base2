#include<iostream>
using namespace std;

//#define int top = -1;
#define size 10
int ara[size];
int top = -1;

void push(int val)
{
    if(top == size - 1)
    {
        cout<<"Stack is Full!!"<<endl;
    }
    else
    {
        ++top;
        ara[top] = val;
    }
}

void pop()
{
    if(top == -1)
        cout<<"Stack is Empty!!"<<endl;
    else
    {
        cout<<"Popped Element = "<<ara[top]<<endl;
        top--;
    }
}

int main()
{
    int n;
    cin>>n;

    for(int i=10; i<=90; i+=10)
    {
        push(i);
    }

    for(int i=0; i<size; i++)
    {
        cout<<ara[i]<<" ";
    }


    return 0;
}

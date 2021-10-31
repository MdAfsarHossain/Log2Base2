#include<iostream>
using namespace std;

#define size 6
#define mid size/2

int ara[6];
int top1 = -1;
int top2 = mid - 1;

void push1(int val)
{
    if(top1 == mid-1)
        return ;
    else
        ara[++top1] = val;
}

int pop1()
{
    if(top == -1)
        return -1;
    else
        return ara[top--];
}

void push2(int val)
{
    if(top2 == size - 1)
        return ;
    else
        ara[++top2] = val;
}

int pop2()
{
    if(top2 == mid - 1)
        return -1;
    else
        return ara[top2--];
}

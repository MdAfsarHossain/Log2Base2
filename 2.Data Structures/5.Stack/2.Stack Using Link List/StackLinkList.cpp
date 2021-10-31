#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void push(int val)
{
    struct Node *newNode = new Node();

    newNode->data = val;

    newNode->next = head;

    head = newNode;
}

void pop()
{
    struct Node *temp;

    if(head == NULL)
        cout<<endl<<"Stack is Empty!!"<<endl;
    else
    {
        cout<<endl<<"Poped Element = "<<head->data;
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    for(int i=10; i<=100; i+=10)
    {
        push(i);
    }

    struct Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }


    pop();
    pop();
    pop();

    struct Node *pri = head;
    cout<<endl;
    while(pri != NULL)
    {
        cout<<pri->data<<" ";
        pri = pri->next;
    }

    return 0;
}

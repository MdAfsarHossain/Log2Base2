#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head = NULL;

struct Node *front = NULL, *rear = NULL;

void enqueue(int val)
{
    struct Node *newNode = new Node();

    newNode->data = val;
    newNode->next = NULL;

    if(front == NULL && rear == NULL)
        front = rear = newNode;
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue()
{
    struct Node *temp;
    if(front == NULL)
        cout<<"Queue is Empty. Unable to perfonm dequeue."<<endl;
    else
    {
        cout<<"Dequeue Element = "<<front->data<<endl;

        temp = front;
        front = front->next;

        if(front == NULL)
            rear = NULL;

        free(temp);
    }
}

int main()
{
    for(int i=10; i<=100; i+=10)
    {
        enqueue(i);
    }

    struct Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

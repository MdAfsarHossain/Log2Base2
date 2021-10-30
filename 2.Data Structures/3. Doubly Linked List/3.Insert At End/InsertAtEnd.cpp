#include<iostream>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void addLast(int val)
{
    struct Node *newNode = new Node();
    newNode->data = val;

    if(head == NULL)
    {
        newNode->prev = NULL;
        newNode->next = NULL;
        head = newNode;
    }
    else
    {
        struct Node *lastNode = head;

        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
        newNode->prev = lastNode;
        newNode->next = NULL;

    }
}

int main()
{
    for(int i=10; i<=100; i+=10)
    {
        addLast(i);
    }

    struct Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

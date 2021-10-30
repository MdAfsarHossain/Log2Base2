#include<iostream>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void addFirst(int val)
{
    struct Node *newNode = new Node();

    newNode->data = val;

    if(head == NULL)
    {
        newNode->next = NULL;
        newNode->prev = NULL;
        head = newNode;
    }
    else
    {
        newNode->prev = NULL;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

int main()
{
    for(int i=10; i<=100; i+=10)
    {
        addFirst(i);

    }

    struct Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

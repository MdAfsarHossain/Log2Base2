#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head = NULL;

void addLast(int val)
{
    struct Node *newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if(head == NULL)
    {
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
    }
}

int main()
{
    for(int i=10; i<=100; i+=10)
    {
        addLast(i);
    }

    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

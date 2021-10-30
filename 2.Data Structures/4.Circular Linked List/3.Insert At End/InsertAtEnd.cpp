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
        newNode->next = newNode;
        head = newNode;
    }
    else
    {
        struct Node *temp = head;
        while(temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

int main()
{
    for(int i=10; i<=100; i+=10)
    {
        addLast(i);
    }

    struct Node *temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
}

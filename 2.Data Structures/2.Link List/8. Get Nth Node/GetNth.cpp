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

int getNthNode(struct Node *head, int index)
{
    struct Node *temp = head;
    int count = 0;

    while(temp != NULL)
    {
        if(count == index)
        {
            return temp->data;
        }

        count++;
        temp = temp->next;
    }
    return -1;
}

void printList(struct Node *head)
{
    struct Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    for(int i=10; i<=100; i+=10)
    {
        addLast(i);
    }

    printList(head);

    int pos = getNthNode(head, 7);

    if(pos == -1)
    {
        cout<<"Out of index!!!!"<<endl;
    }
    else
    {
        cout<<pos<<endl;
    }
}


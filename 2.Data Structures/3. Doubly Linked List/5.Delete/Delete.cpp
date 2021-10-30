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

void deleteNode(struct Node **head, int key)
{
    if(*head == NULL)
    {
        return ;
    }
    struct Node *temp = *head;

    while(temp != NULL && temp->data != key)
    {
        temp = temp->next;
    }

    if(temp == NULL)
        cout<<endl<<"Key Not Found"<<endl;
    else if(temp == *head)
    {
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(temp);
    }
    else if(temp->next == NULL)
    {
        temp->prev->next = NULL;
        free(temp);
    }
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}

int main()
{
    for(int i=10; i<=100; i+=10)
    {
        addLast(i);
    }

    struct Node *pri = head;

    while(pri != NULL)
    {
        cout<<pri->data<<" ";
        pri = pri->next;
    }
    pri = head;
    deleteNode(&head, 110);
    deleteNode(&head, 80);

    cout<<endl;
    while(pri != NULL)
    {
        cout<<pri->data<<" ";
        pri = pri->next;
    }
}


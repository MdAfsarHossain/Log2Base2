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

void printNode()
{
    if(head == NULL)
        return ;

    struct Node *temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
}

void deleteNode(int key)
{
    if(head == NULL)
        return ;

    if(head->data == key && head->next == head)
    {
        free(head);
        head = NULL;
    }
    else if(head->data == key)
    {
        struct Node *last = head, *temp;
        while(last->next != head)
        {
            last = last->next;
        }
        temp = head;
        last->next = head->next;
        head = head->next;
        free(temp);
    }
    else
    {
        struct Node *current = head, *temp;
        while(current->next != head)
        {
            if(current->next->data == key)
            {
                temp = current->next;
                current->next = temp->next;
                free(temp);
                break;
            }
            current = current->next;
        }

        if(current->next == head)
            cout<<"Key Not Found!"<<endl;
    }
}

int main()
{
    for(int i=10; i<=100; i+=10)
    {
        addLast(i);
    }

    printNode();

    deleteNode(30);
    cout<<endl;
    printNode();
}


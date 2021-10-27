#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head = NULL;

void add(int val)
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

int searchNode(struct Node *head, int key)
{
    struct Node *temp = head;

    while(temp != NULL)
    {
        if(temp->data == key)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main()
{
    for(int i=10; i<=100; i+=10)
    {
        add(i);
    }

    printList(head);

    if(searchNode(head, 45))
    {
        cout<<"Found!"<<endl;
    }
    else
    {
        cout<<"Not Found!!"<<endl;
    }

    return 0;
}

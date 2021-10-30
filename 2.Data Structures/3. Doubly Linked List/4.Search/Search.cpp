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
        struct Node *last = head;
        while( last->next != NULL)
        {
            last = last->next;
        }
        last->next = newNode;
        newNode->prev = last;
        newNode->next = NULL;
    }
}

int searchNode(struct Node *head, int key)
{
    struct Node *check = head;

    while(check != NULL)
    {
        if(check->data == key)
            return 1;
        check = check->next;
    }

    return 0;
}

int main()
{
    for(int i=10; i<=100; i+=10)
    {
        addLast(i);
    }

    struct Node  *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    if(searchNode(head, 25))
    {
        cout<<endl<<"Found"<<endl;
    }
    else
    {
        cout<<endl<<"Not Found"<<endl;
    }
}

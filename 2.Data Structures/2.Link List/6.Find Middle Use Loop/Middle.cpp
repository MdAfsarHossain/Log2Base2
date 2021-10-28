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

int getLength(struct Node *head)
{
    struct Node *temp = head;
    int count = 0;

    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int getMiddle(struct Node *head)
{
    struct Node* temp = head;

    if(temp != NULL)
    {
        int length = getLength(temp);
        int i=0;
        cout<<length<<endl;

        for(i=0; i<length/2; i++)
        {
            temp = temp->next;
        }
        return temp->data;
    }

    return -1;
}

int main()
{
    for(int i=10; i<=50; i+=10)
    {
        add(i);
    }

    printList(head);

    int posi = getMiddle(head);

    if(posi == -1)
    {
        cout<<"NULL"<<endl;
    }
    else
    {
        cout<<"Middle Link Data is : "<<posi<<endl;
    }

}

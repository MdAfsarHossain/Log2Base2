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


int getMiddleNode(struct Node *head)
{
    struct Node *slow, *fast;
    slow = fast = head;

    if(head != NULL)
    {
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow->data;
    }

    return -1;
}

int main()
{
    for(int i=10; i<=40; i+=10)
    {
        add(i);
    }

    int posi = getMiddleNode(head);

    //printList(head);

    if(posi == -1)
    {
        cout<<"NULL"<<endl;
    }
    else
    {
        cout<<"Middle Link Data is : "<<posi<<endl;
    }
}


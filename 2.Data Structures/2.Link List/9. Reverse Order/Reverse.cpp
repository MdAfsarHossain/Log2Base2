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

void deleteNode(struct Node **head, int key)
{
    struct Node *temp;

    if((*head)->data == key)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    else
    {
        struct Node *current = *head;

        while( current->next != NULL)
        {
            if(current->next->data == key)
            {
                temp = current->next;
                current->next = current->next->next;
                free(temp);
                break;
            }
            else
            {
                current = current->next;
            }
        }
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

void print_in_reverse(struct Node *head)
{
    if(head == NULL)
        return ;
    print_in_reverse(head->next);
    cout<<head->data<<" -> ";
}

int main()
{
    for(int i=10; i<=100; i+=10)
    {
        add(i);
    }

    printList(head);
    print_in_reverse(head);
    cout<<"NULL"<<endl;
}


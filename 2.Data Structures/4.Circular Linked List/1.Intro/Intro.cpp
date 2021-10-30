#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head, *middle, *last;

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

int main()
{
    head = new Node();
    middle = new Node();
    last = new Node();

    head->data = 10;
    middle->data = 20;
    last->data = 30;

    head->next = middle;
    middle->next = last;
    last->next = head;

    printNode();
}

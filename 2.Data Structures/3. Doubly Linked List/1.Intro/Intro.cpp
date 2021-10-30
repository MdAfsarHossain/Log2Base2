#include<iostream>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

//struct Node *head = NULL;
struct Node *head, *middle, *last;

int main()
{
    head = new Node();
    middle = new Node();
    last = new Node();

    head->data = 10;
    middle->data = 20;
    last->data = 30;

    head->prev = NULL;
    head->next = middle;
    middle->prev = head;
    middle->next = last;
    last->prev = middle;
    last->next = NULL;

    struct Node *temp = head;

    cout<<"Forward Traversal"<<endl;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl<<"Backward Traversal"<<endl;
    temp = last;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
}

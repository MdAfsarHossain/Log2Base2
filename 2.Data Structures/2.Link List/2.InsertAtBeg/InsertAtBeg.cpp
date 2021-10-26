#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head= NULL;

void addFirst(int val)
{
 struct Node *newNode = new Node();
 newNode->data = val;
 newNode->next = head;

 head = newNode;
}

int main()
{
    /*
    addFirst(90);
    addFirst(80);
    addFirst(70);
    addFirst(60);
    addFirst(50);
    addFirst(40);
    addFirst(30);
    addFirst(20);
    addFirst(10);
    */
    for(int i=150; i>=10; i-=10)
    {
        addFirst(i);
    }
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *head, *middle, *afsar, *last;

int main()
{
    /*
    head = (node*)malloc(sizeof(node));
    middle = (node*)malloc(sizeof(node));
    last = (node*)malloc(sizeof(node));
    */
    head = new Node();
    middle = new Node();
    afsar = new Node();
    last = new Node();

    head->data = 10;
    middle->data = 20;
    afsar->data = 25;
    last->data = 30;

    head->next = middle;
    middle->next = afsar;
    afsar->next = last;
    last->next = NULL;

    struct Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;  // Next link added
    }

    return 0;
}

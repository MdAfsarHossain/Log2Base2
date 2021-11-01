#include<iostream>
using namespace std;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
};

struct Node *head = NULL;

struct Node* getNewNode(int val)
{
    struct Node *newNode = new Node();
    newNode->key = val;
    newNode->left = NULL;
    newNode->right = NULL;
    head = newNode;

    return newNode;
};

int main()
{
    struct Node *root = new Node();

    root->key = 10;
    root->left = NULL;
    root->right = NULL;
    struct Node *temp = root;
    while(temp != NULL)
    {
        cout<<temp->key<<" ";
        temp = temp->right;
    }
    /*
    for(int i=20; i<=100; i+=10)
    {
        getNewNode(i);
    }

    struct Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->key<<" ";
        temp = temp->left;
    }
    */
}

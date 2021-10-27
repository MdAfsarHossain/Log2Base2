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

        while(current->next != NULL)
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

/*   PRINT   */
void printList(struct Node *head)
{
    struct Node *temp = head;

    //iterate the entire linked list and print the data
    while(temp != NULL)
    {
         cout<<temp->data<<" ";
         temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main()
{
    for(int i=10; i<=100; i+=10)
    {
        add(i);
    }

    printList(head);
    cout<<"---- DELETE ----"<<endl;
    deleteNode(&head, 20);
    printList(head);
    deleteNode(&head, 50);
    printList(head);


    return 0;
}


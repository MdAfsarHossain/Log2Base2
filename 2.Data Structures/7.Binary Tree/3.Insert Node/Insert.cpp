#include<iostream>
using namespace std;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
};

struct Node* inorder(int val)
{
    struct Node *root = new Node();
    if(root == NULL)
        return 0;
    inorder(root->left);
    cout<<root->key<<"";
    inorder(root->right);
}

int main()
{
    for(int i=0; i<6; i++)
    {
      inorder(i);
    }

}

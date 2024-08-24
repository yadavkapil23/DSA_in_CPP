#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = nullptr;
    }
};

// Function to perform preorder traversal
void preorderTraversal(Node *root)
{
    // Base case
    if (root == nullptr)
        return;

    // Visit the current node
    cout << root->data << " ";

    // Recur on the left subtree
    preorderTraversal(root->left);

    // Recur on the right subtree
    preorderTraversal(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    preorderTraversal(root);
    return 0;
}
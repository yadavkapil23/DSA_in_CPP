#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to perform inorder traversal
void inorderTraversal(Node *root)
{

    // Empty Tree
    if (root == nullptr)
        return;

    // Recur on the left subtree
    inorderTraversal(root->left);

    // Visit the current node
    cout << root->data << " ";

    // Recur on the right subtree
    inorderTraversal(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    inorderTraversal(root);
    return 0;
}

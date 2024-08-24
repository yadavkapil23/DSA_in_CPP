#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
struct node *create()
{
    int value;
    cout << "Enter the data (press -1 to exit) : ";
    cin >> value;
    if (value == -1)
    {
        return nullptr;
    }
    node *newnode = new node();
    newnode->data = value;
    cout << "Enter the left child of " << value << " : ";
    newnode->left = create();
    cout << "enter the right child of " << value << " : ";
    newnode->right = create();
    return newnode;
}
void inorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << (root->data) << endl;
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << (root->data) << endl;
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << (root->data) << endl;
}
int main()
{
    struct node *root;
    root = create();
    cout << "Your Inorder Traversal is : " << endl;
    inorder(root);
    cout << "Your Preorder Traversal is : " << endl;
    preorder(root);
    cout << "Your Postorder Traversal is : " << endl;

    postorder(root);
    return 0;
}
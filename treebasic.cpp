#include <iostream>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    // Constructor to initialize the node
    TreeNode(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
TreeNode *insert(TreeNode *root, int value)
{
    // If the tree is empty, create the root node
    if (root == nullptr)
    {
        return new TreeNode(value);
    }

    // Otherwise, recur down the tree
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }

    // Return the unchanged node pointer
    return root;
}
void inorder(TreeNode *root)
{
    if (root != nullptr)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(TreeNode *root)
{
    if (root != nullptr)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(TreeNode *root)
{
    if (root != nullptr)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
int main()
{
    TreeNode *root = nullptr;

    // Insert nodes into the tree
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    // Display the tree using different traversal methods
    cout << "In-order traversal: ";
    inorder(root);
    cout << endl;

    cout << "Pre-order traversal: ";
    preorder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *insert(Node *root, int value)
{
    if (root == nullptr)
    {
        Node *newNode = new Node;
        newNode->data = value;
        return newNode;
    }

    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }

    return root;
}

void inorderTraversal(Node *root)
{
    if (root != nullptr)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main()
{
    Node *root = nullptr;
    int numElements;

    cout << "Enter the number of elements: ";
    cin >> numElements;

    for (int i = 0; i < numElements; i++)
    {
        int value;
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;
        root = insert(root, value);
    }

    cout << "Inorder traversal: ";
    inorderTraversal(root);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *insert(Node *root, int value)
{
    if (root == nullptr)
    {
        Node *newNode = new Node;
        newNode->data = value;
        return newNode;
    }

    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }

    return root;
}

int main()
{
    Node *root = nullptr;

    // Insert nodes into the tree
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    // ... (perform other operations on the tree)

    return 0;
}
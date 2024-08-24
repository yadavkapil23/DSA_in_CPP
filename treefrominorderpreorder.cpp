#include <iostream>
using namespace std;
struct Node // This defines a struct called Node with an integer data field and two pointers to other Nodes (left and right children), initialized to nullptr.
{
    int data;
    Node *left = nullptr;
    Node *right = nullptr;

    Node(int data) // This is the constructor for the Node struct. It takes an integer and assigns it to the data field of the Node.
    {
        this->data = data;
    }
};
int searchInOrder(int inOrder[], int start, int end, int curr) // This function searches for a value 'curr' in the inOrder array between indices 'start' and 'end'. It returns the index if found, or -1 if not found.
{
    for (int x = start; x <= end; x++)
    {
        if (inOrder[x] == curr)
        {
            return x;
        }
    }
    return -1;
}
Node *buildTree(int inOrder[], int preOrder[], int start, int end) // This is the start of the buildTree function. It uses a static integer 'i' to keep track of the current position in the preOrder array across recursive calls.
{
    static int i = 0;
    if (start > end) // If the start index is greater than the end index, it means we're out of bounds, so return nullptr.
    {
        return nullptr;
    }
    int curr = preOrder[i++];
    Node *root = new Node(curr); // Create a new Node with the current value from the preOrder array, and increment i.
    if (start == end)            // If start equals end, we're at a leaf node, so return this node.
    {
        return root;
    }
    int pos = searchInOrder(inOrder, start, end, curr);        // Find the position of the current value in the inOrder array.
    root->left = buildTree(inOrder, preOrder, start, pos - 1); // Recursively build the left and right subtrees.
    root->right = buildTree(preOrder, inOrder, pos + 1, end);
    return root;
}
int main()
{
    int preOrder[] = {1, 2, 4, 3, 5};
    int inOrder[] = {4, 2, 1, 5, 3};
    int n = sizeof(inOrder) / sizeof(inOrder[0]);
    // Call the buildTree function to construct the tree.
    Node *root = buildTree(inOrder, preOrder, 0, n - 1);
    // You can add code here to traverse or use the built tree
    return 0;
}
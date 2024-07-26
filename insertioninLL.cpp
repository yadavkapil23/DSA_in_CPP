#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = nullptr;
int main()
{
    int value;
    char ch;
    cout << "do you want to create a linked list : ";
    cin >> ch;
    while (ch == 'y' || ch == 'Y')
    {
        node *newnode = new node();
        cout << "enter the data : ";
        cin >> value;
        newnode->data = value;
        newnode->next = nullptr;
        if (newnode == nullptr)
        {
            cout << "memory not allocated." << endl;
            return 1;
        }
        else
        {
            if (head == nullptr)
            {
                head = newnode;
            }
            else
            {
                node *temp = head;
                while (temp->next != nullptr)
                {
                    temp = temp->next;
                }
                temp->next = newnode;
            }
        }
        cout << "do you want to enter more data : ";
        cin >> ch;
    }
    cout << "we are printing the linked list : " << endl;
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << "we are inserting an element in the linked list : " << endl;
    int pos;
    cout << "enter the position to insert the element : ";
    cin >> pos;
    cout << "enter the data to insert : ";
    cin >> value;
    node *newnode = new node();
    newnode->data = value;
    newnode->next = nullptr;
    if (head == nullptr)
    {
        cout << "the linked list is empty" << endl;
    }
    else
    {
        if (pos == 1)
        {
            // node* prev = nullptr;
            cout << "we are inserting the newnode at the head : " << endl;
            temp = head;
            newnode->next = head;
        }
        else
        {
            node *temp = head;
            for (int i = 0; i < pos && temp->next != nullptr; i++)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
    cout << "node inserted successfully ." << endl;
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}
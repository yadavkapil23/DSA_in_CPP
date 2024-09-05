#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head;
int main()
{
    node *newnode;
    int value;
    char ch;
    cout << "Do you want to enter the data : ";
    cin >> ch;
    while (ch == 'y' || ch == 'Y')
    {
        cout << "enter the data : ";
        cin >> value;
        node *newnode = new node();
        newnode->data = value;
        newnode->next = nullptr;
        if (newnode == nullptr)
        {
            cout << "memory not allocated";
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
        cout << "do you want to enter more data in Linked list : ";
        cin >> ch;
    }
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << "we are now reversing the linked list." << endl;
    node *prev = nullptr;
    node *next = nullptr;
    node *current = head;
    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    cout << "now we are printing the linked list : " << endl;
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}
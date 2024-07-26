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
    return 0;
}
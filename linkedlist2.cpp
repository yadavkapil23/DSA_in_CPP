#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        next = nullptr;
        data = value;
    }
};
class Linkedlist
{
public:
    node *head;
    Linkedlist()
    {
        head = nullptr;
    }
    void createLL(int value)
    {
        node *newnode = new node(value);
        if (newnode == nullptr)
        {
            cout << "Memory Not Allocated." << endl;
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
    }
    void display()
    {
        cout << "Your Linked List is : " << endl;
        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};
int main()
{
    Linkedlist L;
    L.createLL(12);
    L.createLL(23);
    L.createLL(99);
    L.createLL(65);
    L.createLL(54);
    L.display();
    return 0;
}
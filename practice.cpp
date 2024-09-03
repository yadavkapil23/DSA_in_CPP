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

    cout <<"we are reversing the linked list : ";
    node *prev = nullptr;
    node *next = nullptr;
    node *curr = head;

    node *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        next = curr->next; // next node ko ham current ke next me store kr denge.
        curr->next = prev; // current vali node ko uski pichli node pe point kra denge.
        prev = curr;       // pichli node ko current par point kra denge.
        curr = next;       // current vali ko uski next par point kra denge.
    }
    // When we reach the end of the list, curr will be nullptr. At this point, prev will be pointing to the new head of the reversed list.

    head = prev; // update the head pointer to point to the new head of the reversed list)
    cout << "we are printing the linked list : " << endl;
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0;
}
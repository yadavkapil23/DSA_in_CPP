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
    // node* temp = head;
    // while(temp!= nullptr){
    //     cout<<temp->data<<endl;  //In summary, the first code snippet correctly traverses the linked list, while the second code snippet only prints the data of the first node.

    // }
    //     temp = temp->next;
    int start, k;
    cout << "now we are reversing the K nodes of the Linked List.";
    cout << "Enter the start position";
    cin >> start;
    cout << "Enter k : ";
    cin >> k;
    node *prev = nullptr;
    node *current = head;
    node *next = nullptr;
    for (int i = 0; i < start - 1; i++)
    {
        prev = current;
        current = current->next;
    }
    // here the current node is pointing to the start node.
    // and before start is pointing to the prev.
    node *beforestart = prev;
    node *startnode = current;

    // now reversing the K nodes.
    for (int i = 0; i < k; i++)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    if (beforestart != nullptr)
    {
        beforestart->next = prev;
    }
    else
    {
        head = prev;
    }
    startnode->next = current;
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}

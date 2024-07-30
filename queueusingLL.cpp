#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }

    // Function to add an element to the queue
    void enqueue(int value)
    {
        Node *newNode = new Node();
        if (newNode == nullptr)
        {
            cout << "Memory not allocated." << endl;
            return;
        }
        newNode->data = value;
        newNode->next = nullptr;

        if (rear == nullptr)
        {
            // If the queue is empty, both front and rear will point to the new node
            front = rear = newNode;
        }
        else
        {
            // Attach the new node to the rear and update the rear to the new node
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Function to remove an element from the queue
    void dequeue()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty." << endl;
            return;
        }

        Node *temp = front;
        front = front->next;

        // If front becomes null, then rear should also be null
        if (front == nullptr)
        {
            rear = nullptr;
        }

        delete temp;
    }

    // Function to display the elements of the queue
    void display()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty." << endl;
            return;
        }

        Node *temp = front;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    char ch;
    int value;

    cout << "Do you want to enqueue an element? (y/n): ";
    cin >> ch;
    while (ch == 'y' || ch == 'Y')
    {
        cout << "Enter the value to enqueue: ";
        cin >> value;
        q.enqueue(value);
        cout << "Do you want to enqueue more elements? (y/n): ";
        cin >> ch;
    }

    cout << "Queue elements are: ";
    q.display();

    cout << "Do you want to dequeue an element? (y/n): ";
    cin >> ch;
    while (ch == 'y' || ch == 'Y')
    {
        q.dequeue();
        cout << "Queue elements after dequeue are: ";
        q.display();
        cout << "Do you want to dequeue more elements? (y/n): ";
        cin >> ch;
    }

    return 0;
}

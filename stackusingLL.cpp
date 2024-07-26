#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = nullptr;
    }
};
class Stack
{
public:
    node *head;
    int capacity;
    int currsize;
    Stack(int c)
    {
        this->capacity = c;
        this->currsize = 0;
        head = nullptr;
    }
    bool isEmpty()
    {
        return this->head == nullptr;
    }
    bool isFull()
    {
        return this->currsize == this->capacity;
    }

    void push(int data)
    {
        if (this->currsize == this->capacity)
        {
            cout << "Overflow" << endl;
            return;
        }
        node *newnode = new node(data);
        newnode->next = this->head;
        this->head = newnode;
        this->currsize++;
    }

    int pop()
    {
        if (this->head == nullptr)
        {
            cout << "Underflow" << endl;
            return 1;
        }
        node *newhead = this->head->next;
        this->head->next = nullptr;
        node *toberemoved = this->head;
        int result = toberemoved->data;
        delete toberemoved;
        this->head = newhead;
        return result;
    }
    int gettop()
    {
        if (this->head == nullptr)
        {
            cout << "Underflow" << endl;
            return 1;
        }
        return this->head->data;
    }

    int size()
    {
        return this->currsize;
    }
};
int main()
{
    Stack st(5);
    st.push(2);
    st.push(65);
    st.push(6);
    // st.printStack();
    cout << st.gettop() << endl;
    st.push(89);
    st.push(12);
    cout << st.gettop() << endl;
    return 0;
}
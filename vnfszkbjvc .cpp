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
        next = nullptr;
    }
};
class Stack
{
public:
    int capacity;
    int currsize;
    node *head;
    Stack(int c)
    {
        this->capacity = c;
        this->currsize = 0;
        head = nullptr;
    }

    void push(int data)
    {
        if (this->currsize == this->capacity)
        {
            cout << "Overflow" << endl;
        }
        node *newnode = new node(data);
        newnode->next = this->head;
        this->head = newnode;
        this->currsize++;
    }
    void pop(int data)
    {
        if (this->head == nullptr)
        {
            cout << "Undeflow" << endl;
        }
        node *newhead = this->head->next;
        this->head->next = nullptr;
        node *tobedeleted = this->head;
        int result = tobedeleted->data;
        delete tobedeleted;
        this->head = newhead;
    }
    int gettop()
    {
        if (this->head == nullptr)
        {
            cout << "Underflow" << endl;
        }
        return this->head->data;
    }
    int size()
    {
        cout << "the size of your stack is : " << endl;
        return this->currsize;
    }
    void display()
    {
        if (this->head == nullptr)
        {
            cout << "Underflow" << endl;
        }
        cout << "we are printing the Stack : " << endl;
        node *temp = this->head;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(89);
    st.push(21);
    st.push(32);
    cout << st.gettop() << endl;
    st.push(75);
    st.pop(65);
    st.push(43);
    cout << st.gettop() << endl;
    st.display();
    return 0;
}

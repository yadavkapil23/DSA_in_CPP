#include <iostream>
using namespace std;
class Stack
{
public:
    int capacity;
    int *arr;
    int top;
    Stack(int c)
    {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }
    void push(int data)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Overflow";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }
    int pop()
    {
        if (this->top == -1)
        {
            cout << "Stack is empty , nothing to pop.";
            return -1;
        }
        int data = this->arr[this->top];
        this->top--;
    }
    int gettop()
    {
        if (this->top == -1)
        {
            cout << "the Stack is empty" << endl;
            return -1;
        }
        return this->arr[this->top];
    }
    bool isEmpty()
    {
        return this->top == -1; // isme agar top index = -1 h to empty h varna nhi h.
    }
    int size()
    {
        this->top + 1; // initially top = -1 h , to agar top+1 krenge to size zero aa jayega.
    }
    bool isFull()
    {
        return this->top == this->capacity - 1;
    }
    void printstack()
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Stack is Empty";
            return;
        }
        for (int i = 0; i < top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack st(5);
    st.push(12);
    st.push(54);
    st.push(8);
    st.push(37);
    st.pop();
    cout << st.gettop() << "\n";
    st.push(2);
    st.printstack();
    return 0;
}
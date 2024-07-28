// stack me LIFO last in first out hota tha , queue me FIFO , first in first out h
// stack me insertion and deletion ek hi end se ho rha hoga , BUT , Queue me insertion end se and deletion front se ho rha hoga
#include <iostream>
using namespace std;
class queue
{
public:
    int *arr;
    int front;
    int end;
#define n 6
    queue()
    {
        arr = new int[n];
        front = -1;
        end = -1;
    }
    void push(int x)
    {
        if (end == n - 1)
        {
            cout << "queue is Full" << endl;
            return;
        }
        end++;
        arr[end] = x;
        if (front == -1)
        {
            front++;
        }
    }
    ////////////////////////////////////////////////////////////////////

    void pop()
    {
        if (front == -1 || front > end)
        {
            cout << "no elements present." << endl;
            return;
        }
        front++;
    }
    /////////////////////////////////////////////////////////
    int peek()
    {
        if (front == -1 || front > end)
        {
            cout << "no elements present." << endl;
            return -1;
        }
        return arr[front];
    }

    void printqueue()
    {
        if (empty())
        {
            cout << "Queue is Empty." << endl;
        }
        for (int i = front; i <= end; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ///////////////////////////////////////////////////////////
    bool empty()
    {
        if (front == -1 || front > end)
        {
            cout << "no elements in the queue" << endl;
            return true;
        }
        return false;
    }
};
int main()
{
    queue q;
    q.push(1);
    q.push(12);
    q.push(34);
    q.printqueue();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    return 0;
}
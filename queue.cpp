// stack me LIFO last in first out hota tha , queue me FIFO , first in first out h
// stack me insertion and deletion ek hi end se ho rha hoga , BUT , Queue me insertion end se and deletion front se ho rha hoga
#include <iostream>
using namespace std;
class queue
{
public:
    int *arr; // pointer to an array that will store the queue elements.
    int front;
    int end;
#define n 6 // Defines a constant n with a value of 6, representing the maximum size of the queue.
    queue()
    {
        arr = new int[n];
        front = -1; // Initializes front to -1, indicating that the queue is initially empty.
        end = -1;
    }
    void push(int x)
    {
        if (end == n - 1) // The last position in the array is n-1. So, when end equals n-1, it means there is no more space to add new elements, and the queue is full.
        {
            cout << "queue is Full" << endl;
            return;
        }
        end++;
        arr[end] = x;
        if (front == -1) // Checks if the queue was previously empty.
        {                // When you add the first element to the queue, you increment end to 0 and set the first element in the array. However, since front is still -1, it needs to be updated to point to the first element as well.
            front++;     // sets front to 0 , if it was empty.
        }
    }
    ////////////////////////////////////////////////////////////////////

    void pop()
    {
        if (front == -1 || front > end)
        // why front > end :
        // Each time an element is popped from the queue, front is incremented. , it will point to next element as the first element is popped.
        // If all elements are popped, front will eventually become greater than end.
        // For example, if end is 2 and we pop three elements, front will be 3.
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
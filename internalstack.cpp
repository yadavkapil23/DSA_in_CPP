#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    // Check if the stack is empty before popping
    if (!st.empty())
    {
        st.pop();
    }
    else
    {
        cout << "Cannot pop from an empty stack." << endl;
    }

    st.push(89);
    st.push(21);
    st.push(32);

    // Check if the stack is empty before accessing the top element
    if (!st.empty())
    {
        cout << st.top() << endl;
    }
    else
    {
        cout << "Stack is empty, no top element." << endl;
    }

    st.push(75);

    // Pop an element without checking because the stack is known to have elements
    st.pop();

    st.push(43);

    // Again, check if the stack is empty before accessing the top element
    if (!st.empty())
    {
        cout << st.top() << endl;
    }
    else
    {
        cout << "Stack is empty, no top element." << endl;
    }

    return 0;
}

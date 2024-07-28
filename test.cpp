// stack using the internal
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    if (!st.empty())
    {
        st.pop();
    }
    else
    {
        cout << "cannot pop from an empty stack.,please push some elements into the stack." << endl;
    }
    st.push(45);
    st.push(12);
    st.push(7);
    cout << "we are now printing the top element of the stack." << endl;
    if (!st.empty())
    {
        cout << "your top element of the stack is : " << st.top() << endl;
    }
    else
    {
        cout << "cannot find the element from an empty stack" << endl;
    }
    cout << "your stack is : " << endl;
    stack<int> temp = st;
    if (!temp.empty())
    {
        while (!temp.empty())
        {
            cout << temp.top() << endl;
            temp.pop();
        }
    }
    else
    {
        cout << "Stack is empty" << endl;
    }
    return 0;
}
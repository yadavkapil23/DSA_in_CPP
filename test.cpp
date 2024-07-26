// copy a stack from one stack to another in the same way.
#include <iostream>
#include <stack>
using namespace std;
stack<int> copystack(stack<int> &input)
{
    stack<int> temp;
    while (!input.empty())
    {
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> result;
    while (!temp.empty())
    {
        int current = temp.top();
        temp.pop();
        result.push(current);
    }
    return result;
}
int main()
{
    stack<int> st;
    st.push(78);
    st.push(12);
    st.push(37);
    stack<int> res = copystack(st);
    while (!res.empty())
    {
        int now = res.top();
        res.pop();
        cout << now << endl;
    }
    return 0;
}

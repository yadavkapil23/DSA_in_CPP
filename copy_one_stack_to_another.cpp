#include <iostream>
#include <stack>
using namespace std;
stack<int> stackcopy(stack<int> &input)
{
    stack<int> temp;
    while (!input.empty())
    {
        // do till the stack doesn't becomes empty.
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> result;
    while (!temp.empty())
    {
        int now = temp.top();
        temp.pop();
        result.push(now);
    }
    return result;
}
int main()
{
    stack<int> st;
    st.push(78);
    st.push(34);
    st.push(19);
    stack<int> res = stackcopy(st);
    while (!res.empty())
    {
        int curr = res.top();
        res.pop();
        cout << curr << endl;
    }
    return 0;
}
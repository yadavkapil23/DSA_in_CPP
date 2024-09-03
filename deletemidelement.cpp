// delete middle element of a stack
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(12);
    st.push(28);
    st.push(57);
    st.push(43);
    st.push(78);
    int n = st.size();
    stack<int> temp;
    if (n % 2 == 0)
    {
        int target = n / 2;
        for (int i = 0; i < target - 1; i++)
        {
            temp.push(st.top());
            st.pop();
        }
        st.pop(); // This line removes the middle element from st.
    }
    else
    {
        if (n % 2 != 0)
        {
            int target = ceil(n / 2);
            for (int i = 0; i < target - 1; i++)
            {
                temp.push(st.top());
                st.pop();
            }
            st.pop();
        }
    }
    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
    cout << "the stack after deleting the mid element is : " << endl;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}

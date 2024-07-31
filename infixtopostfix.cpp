/*in this we will learn about the conversion from the infix to postfix.
//(a-b/c)+(a/k-l)


Rules :
If there is operand then print.
If - '(' then push to stack.
If - ')' then pop from the stack and print until '(' is found
If operator - pop from the stack and print until an operator with the less precendence is found.
*/
#include <iostream>
#include <stack>
using namespace std;
int prec(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixtopostfix(string s)
{
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
            else
            {
                while (!st.empty() && prec(st.top()) > prec(s[i]))
                {
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while (!st.empty())
        {
            res += st.top();
            st.pop();
        }
    }
    return res;
}
int main()
{
    cout << infixtopostfix("(a-b/c)+(a/k-l)");
    return 0;
}
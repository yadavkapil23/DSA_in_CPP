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
{ // this returns precendence of the operators , higher values means higher precendence.
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
    string res; // it is used to store the resulting postfix expression.
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        { // If the current character s[i] is an operand (a letter from 'a' to 'z' or 'A' to 'Z'), it is directly added to the result string res.
            res += s[i];
        }
        else if (s[i] == '(')
        { // If the current character is (, it is pushed onto the stack.
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            { // If the current character is ), the code pops and appends all operators from the stack to res until a ( is encountered. The ( is then popped from the stack.
                res += st.top();
                st.pop();
            }
            if (!st.empty())
            {             // This checks if the stack is not empty after the previous loop.
                st.pop(); // If the stack is not empty, it removes the opening parenthesis from the stack.
            }
            else
            {
                while (!st.empty() && prec(st.top()) > prec(s[i]))
                {                    // This starts a loop that continues while the stack is not empty and the precedence of the top of the stack is higher than the current character.
                    res += st.top(); // This adds the top character of the stack to the result string.
                    st.pop();        // This removes the top character from the stack.
                }
                st.push(s[i]); // This pushes the current operator onto the stack.
            }
        }
        while (!st.empty())
        {                    // This starts a loop that continues while the stack is not empty.
            res += st.top(); // This adds the top character of the stack to the result string.
            st.pop();        // This removes the top character from the stack.
        }
    }
    return res;
}
int main()
{
    cout << infixtopostfix("(a-b/c)+(a/k-l)");
    return 0;
}
#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int prefixevaluation(string s)
{
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--) // it starts from backward as the prefix expressions are evaluated from the backside.
    {
        if (s[i] >= '0' && s[i] <= '9') // This line checks if the c urrent character s[i] is a digit (between '0' and '9').
        {
            st.push(s[i] - '0'); // here it pushes the operand into the stack.
        }
        else // If the character s[i] is an operator, pop the top two elements from the stack. These elements are the operands for the operator.
        {
            int op1 = st.top(); // This line pops the top operand from the stack and stores it in op1.
            st.pop();           // This line pops the top operand from the stack (already stored in op1).
            int op2 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    cout << prefixevaluation("-+7*45+20") << endl;
    return 0;
}
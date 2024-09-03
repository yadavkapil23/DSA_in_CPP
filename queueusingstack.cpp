#include <bits/stdc++.h>
using namespace std;
class Que
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }
    int pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "stack is empty";
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    }
    bool isempty()
    {
        if (s1.empty() and s2.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Que q;
    q.push(12);
    q.push(58);
    q.push(29);
    q.push(37);
    cout << q.pop() << endl;
    q.push(39);
    cout << q.pop() << endl;
    return 0;
}
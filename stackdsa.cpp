#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "We are going to create a Stack" << endl;
    int data;
    int n;
    cout << "enter the number of data you want to push into stack : ";
    cin >> n;
    int Stack[n];
    int top = -1;
    // PUSH FUNCTION
    if (top == n - 1)
    {
        cout << "overflow" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "enter the data : ";
            cin >> data;
            top++;
            Stack[top] = data;
        }
    }
    // POP FUNCTION
    cout << "now we will delete the element from the Stack : " << endl;
    if (top == -1)
    {
        cout << "underflow" << endl;
    }
    else
    {
        int data = Stack[top];
        top--;
        cout << "deleted data is : " << data << endl;
    }
    // PEEK FUNCTION
    cout << "now we will use peek : " << endl;
    if (top == -1)
    {
        cout << "underflow" << endl;
    }
    else
    {
        data = Stack[top];
        cout << "the top of the Stack is : " << Stack[top] << endl;
    }
    cout << "Your Stack is : " << endl;
    for (int i = 0; i <= top; i++)
    {
        cout << Stack[i] << " ";
    }
    return 0;
}
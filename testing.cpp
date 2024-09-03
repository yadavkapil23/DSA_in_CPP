#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    cout << "we are creating a queue : " << endl;
    q.push(23);
    q.push(56);
    q.push(67);
    q.push(37);
    q.push(19);
    q.push(78);
    cout << "Your Queue is : " << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    q.pop();
    q.pop();
    cout << q.front() << endl;
    return 0;
}
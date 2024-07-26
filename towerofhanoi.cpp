#include <bits/stdc++.h>
using namespace std;
void towerofhanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }
    towerofhanoi(n - 1, src, helper, dest);
    cout << "Move from " << src << " to " << dest << endl;
    towerofhanoi(n - 1, helper, dest, src);
}
int main()
{
    char src, dest, helper;
    cout << "Enter the source , helper and destination : ";
    cin >> src >> dest >> helper;
    towerofhanoi(3, src, dest, helper);
}
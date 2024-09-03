#include <bits/stdc++.h>
using namespace std;
void explainpair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> x = {21, {34, 76}};
    cout << x.first << " " << x.second.first << " " << x.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {34, 87}, {45, 34}};
    cout << arr[0].first << " " << arr[1].second;
}
int main()
{
    explainpair();
    return 0;
}
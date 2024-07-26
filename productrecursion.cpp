#include <bits/stdc++.h>
using namespace std;
int Product(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = n * Product(n - 1);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << Product(n) << endl;
    return 0;
}
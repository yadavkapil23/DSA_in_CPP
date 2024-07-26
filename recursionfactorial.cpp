// recursion
#include <bits/stdc++.h>
using namespace std;
int Factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = n * Factorial(n - 1);
    //  If you call Factorial(0), it returns 1 immediately (base case).
    // - If you call Factorial(1), it calls Factorial(0) (which returns 1), and then multiplies 1 by 1, returning 1.
    // - If you call Factorial(2), it calls Factorial(1) (which returns 1), and then multiplies 2 by 1, returning 2.
    // - If you call Factorial(3), it calls Factorial(2) (which returns 2), and then multiplies 3 by 2, returning 6.
    // - And so on.

    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << Factorial(n) << endl;
    return 0;
}
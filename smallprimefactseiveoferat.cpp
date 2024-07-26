#include <bits/stdc++.h>
using namespace std;
void primefactor(int n)
{
    int spf[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i; // initially we assume that each number is its own smallest prime factor.
    } // for prime numbers this assumption is correct , for composite numbers it will be corrected in the next part of the code.
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i) // if it satisfies that means that no small factor has been found for the i , so it itself is the spf.
        {
            for (int j = i * i; j <= n; j += i)
            {                    // We start at i*i because all smaller multiples of i would have been handled by smaller primes already.
                if (spf[j] == j) // suppose if we have i=4 , then j will start from the 16 , so as
                {
                    spf[j] = i; // we update the j with the i.
                }
            }
        }
    }
    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    primefactor(n);
    return 0;
}
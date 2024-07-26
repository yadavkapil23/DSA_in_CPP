#include <bits/stdc++.h>
using namespace std;
void PrimeSeive(int n)
{
    int Prime[100] = {0}; // it creates an array of size 100 , each element is initialized to zero.
    for (int i = 2; i < n; i++)
    {
        if (Prime[i] == 0) // it checks if the element is zero ,if zero then it is a prime number.
        {
            for (int j = i * i; j <= n; j += i) // This initializes the variable j to the square of the current number i. This is because all the multiples of i that are less than i * i have already been marked as non-prime in previous iterations.
                                                // If i is 3, the loop will iterate over j values 9, 12, 15, ..., marking all the multiples of 3 as non-prime.
                                                // it will not consider 6 as it is already counted in the multiples of 2.
            {
                Prime[j] = 1; // it marks  multiples of i as non prime by setting prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++) // it is used to print the prime numbers found.
    {
        if (Prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    PrimeSeive(n);
    return 0;
}
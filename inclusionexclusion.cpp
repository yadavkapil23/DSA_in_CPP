#include <bits/stdc++.h>
using namespace std;
int divisible(int n, int a, int b)
{
    int c1 = n / a; // c1,c2 and c3 stores the multiples of a,b less than or equal to n.
    int c2 = n / b;
    int c3 = n / (a * b);

    return (c1 + c2 - c3);
}
int main()
{
    int n, a, b;
    cout << "Enter the first number , whose multiple you have to find : ";
    cin >> a;
    cout << "Enter second number , whose multiple you have to find :  : ";
    cin >> b;
    cout << "Enter the number upto which you have to find the multiple : ";
    cin >> n;
    cout << divisible(n, a, b) << " ";
    return 0;
}
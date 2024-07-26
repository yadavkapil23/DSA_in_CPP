// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "ENTER N : ";
//     cin >> n;
//     int *ptr = &n;
//     cout << n << endl;
//     cout << *ptr << endl; //it will print the value.
//     cout << ptr << endl; //it will print the address.
//     cout << &n << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 34, 87, 54};
    int *ptr = arr;
    cout << *arr << endl;
    cout << *ptr << endl;
    return 0;
}
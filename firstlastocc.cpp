#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstocc(arr, n, i + 1, key);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    cout << "Please Enter the elements from 1 to 10 only : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element : ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    cout << firstocc(arr, n, 0, key) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
bool check(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << " element : ";
        cin >> arr[i];
    }
    if (check(arr, n))
    {
        cout << "Your Array is sorted.";
    }
    else
    {
        cout << "Your Array is not sorted";
    }
}
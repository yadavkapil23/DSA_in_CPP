// insertion sort
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the " << i << " element : ";
        cin >> arr[i];
    }
    // now we are performing the insertion sort.
    for (int i = 1; i < n; i++)
    { // we assume that the first element is already sorted.
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    cout << "your array after doing insertion sort is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
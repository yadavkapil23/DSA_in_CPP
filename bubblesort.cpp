#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " Element : ";
        cin >> arr[i];
    }
    cout << "we are performing the bubble sort : ";
    for (int i = 0; i < n - 1; i++)
    { // as we know that if we have n elements , then no. of iterations would be n-1.
        for (int j = i + 1; j < n - 1; j++)
        { // here the inner loop is used for comparison , yha par hmne n-1 isliye use kiya kyunki hamara last element sort ho chuka hoga pehle step me hi , or j=i+1 isliye kyonki hame i or j me comparison krna h to j hamesha i se agla element rhega.
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
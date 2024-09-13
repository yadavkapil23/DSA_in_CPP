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
    for (int i = 1; i < n; i++)
    {                      // here we iterate from the second element to the last element , because in insertion sort , we assume that the first element is sorted
        int temp = arr[i]; // temp is storing the current value.
        int j = i - 1;     // j is initialised to i-1 , indicating the end of sorted array.
        while (j >= 0 && arr[j] > temp)
        {                        // as temp is storing the 1st element that's i , so it will compare it with the zero index element i.e j , so it will compare both these values.
            arr[j + 1] = arr[j]; // then it will shift the value of j to right by one
            j--;                 // it shifts j to its previous value position.
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int mid, int r) // function to merge the two halves of array.
{
    int n1 = (mid - l + 1); // calculate the size of 1st half.
    int n2 = r - mid;       // calculate the size of seecond half.
    int a[n1];              // two temporary arrays to store the halves.
    int b[n2];
    for (int i = 0; i < n1; i++) // here are two for loops for copying the originial elements into the temporary array.
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n1; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0;               // i is the index for the first temporary array a (which holds elements from l to mid).
    int j = 0;               // j is the index for the second temporary array b (which holds elements from mid+1 to r).
    int k = l;               // k is the index for the main array arr where merged elements will be placed, starting from index l.
    while (i < n1 && j < n2) // This loop continues as long as there are elements in both a and b to be compared and merged. n1 is the length of array a, and n2 is the length of array b.
    {
        if (a[i] < b[j]) // If the current element in a (a[i]) is smaller than the current element in b (b[j]), place a[i] into arr[k].
        {
            arr[k] = a[i];
            k++, i++; // Increment both k and i to move to the next element in arr and a, respectively. (k++, i++;)
        }
        else // If a[i] is not smaller than b[j], place b[j] into arr[k].
        {
            arr[k] = b[j];
            k++, j++;
        }
    }
    while (i < n1) // If there are remaining elements in array a, this loop copies them into arr.
    {
        arr[k] = a[i];
        k++, i++;
    }
    while (j < n2) // If there are remaining elements in array b, this loop copies them into arr.
    {
        arr[k] = b[j];
        k++, j++;
    }
}
void mergesort(int arr[], int l, int r) // Recursive function to sort an array.
{
    if (l < r) // Base condition to stop recursion.
    {
        int mid = (l + r) / 2;      // calculate mid point of the array.
        mergesort(arr, l, mid);     // recursively sort the 1st half.
        mergesort(arr, mid + 1, r); // recursively sort the 2nd half.
        merge(arr, l, mid, r);      // merge the two sorted halves.
    }
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << " element : ";
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1); // Call the mergesort function to sort the array.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
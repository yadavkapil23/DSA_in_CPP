#include <bits/stdc++.h>
using namespace std;
int partition(int arr, int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
}
void quicksort(int arr[], int l, int r)
{
    int pi = partition(int arr[], int l, int r)
    {
        if (l < r)
        {
            int pi = partition(arr, l, r);
            quicksort(arr, l, pi - 1);
            quicksort(arr, pi + 1, r);
        }
    }
}
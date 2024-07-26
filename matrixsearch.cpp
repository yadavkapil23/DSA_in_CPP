// is question me hame ek sorted array given hota h.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the rows and columns : ";
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the " << i << " " << j << " element : ";
            cin >> arr[i][j];
        }
    }
    int key;
    cout << "Enter the element to find : ";
    cin >> key;
    // we are starting from the 1st row and top right column , so
    bool found = false;
    int r = 0, c = n - 1; // index 0 se start hua tha isliye.
    while (r < n && c >= 0)
    { // jb tak chlate raho jb tk r < n , means sari rows ko access n kr le and c>=0 means jb tk c>=0 h.
        if (arr[r][c] == key)
        {
            found = true;
            break;
        }
        if (arr[r][c] > key)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "Element found ";
    }
    else
    {
        cout << "element not found";
    }
    return 0;
}
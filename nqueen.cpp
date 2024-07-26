#include <bits/stdc++.h>
using namespace std;
bool isSafe(int **arr, int x, int y, int n) // The isSafe function checks if placing a queen at position (x, y) is safe.
{
    for (int row = 0; row < x; row++) // The first for loop checks all rows above the current row in the same column to see if there is already a queen (arr[row][y] == 1). If found, it returns false.
    {
        if (arr[row][y] == 1)
        {
            return false; // so it will return false. In this problem no two queens can be in the same row , same column , same diagnol.
        }
    }

    // HERE WE ARE CHECKING THE UPPER LEFT DIAGONAL.
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    { // The while loop starts from the current position (x, y) and moves up and left (row--, col--).
      // It checks if there's any queen (arr[row][col] == 1) in the upper-left diagonal.
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    // NOW CHECKING FOR THE UPPER RIGHT DIAGONAL.
    row = x;
    col = y;
    while (row >= 0 && col < n)
    {                           // The while loop starts from the current position (x, y) and moves up and right (row--, col++).
        if (arr[row][col] == 1) // It checks if there's any queen (arr[row][col] == 1) in the upper-right diagonal.
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

// The nqueen function attempts to place queens in a way that no two queens threaten each other.
bool nqueen(int **arr, int x, int n)
{
    if (x >= n) // If x is greater than or equal to n, all queens are placed successfully, so return true.
    {
        return true;
    }
    for (int col = 0; col < n; col++) // This loop iterates over each column in the current row (x).
    {
        if (isSafe(arr, x, col, n)) // For each column in the current row, check if it's safe to place a queen. If safe, place the queen.
        {
            arr[x][col] = 1; //// Place queen

            if (nqueen(arr, x + 1, n)) // Recursively call nqueen for the next row. If it returns true, a solution is found.
            {
                return true;
            }
            arr[x][col] = 0; //// Backtrack and remove queen
        }
    }
    return false; // If no column is safe, return false
}
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    int **arr = new int *[n];   // dynamically allocates memory for an array of integer pointers, each representing a row in the chessboard.
    for (int i = 0; i < n; i++) // This creates a 2D dynamic array of size n x n and initializes all elements to 0.
    {
        arr[i] = new int[n]; // dynamically allocates memory for an array of n integers (columns) for each row i.
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    if (nqueen(arr, 0, n)) // If a solution is found, this code prints the board configuration , here x =0.
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}
#include <iostream>
using namespace std;
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1) // the x and y are < n , bec it should be in the indexes of the matrix. and arr[x][y]=1 , because it can move only on the square having 1 ,not on 0.
    {
        return true; // if it is satisfied then return true.
    }
    return false;
}
bool ratinmaze(int **arr, int x, int y, int n, int **solArr) // here we have also declared an array called as the solution array that will provide us the solution for our rat. , arr is the original maze
{
    if ((x == n - 1) && (y == n - 1))
    {
        solArr[x][y] = 1; // This checks if we've reached the destination (bottom-right corner). If so, mark this position in the solution array and return true.
        return true;
    }
    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;                        // if the current position is safe mark down it in the solution array.
        if (ratinmaze(arr, x + 1, y, n, solArr)) // moving right
        {
            return true;
        }
        if (ratinmaze(arr, x, y + 1, n, solArr)) // moving down.
        {
            return true;
        }
        solArr[x][y] = 0; // if neither move right nor move down then , do backtracking.
        return false;
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter the size of the matrix(n) : ";
    cin >> n;
    int **arr = new int *[n]; // dynamically allocate the memory for the maze.
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) // taking input of the maze from the user.
        {
            cin >> arr[i][j];
        }
    }

    int **solArr = new int *[n]; // create and initialize solutions with zeroes.
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }

    if (ratinmaze(arr, 0, 0, n, solArr))
    {
        cout << "your solution is : " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1
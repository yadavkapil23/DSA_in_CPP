#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, p;
    cout << "Enter the m,n,p: ";
    cin >> m >> n >> p;
    int arr[m][n];
    int brr[n][p];
    cout << "we are taking the input of the 1st array : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the " << i << " " << j << " element : ";
            cin >> arr[i][j];
        }
    }
    cout << "now we are taking the input of the 2nd array : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << "Enter the " << i << " " << j << " element : ";
            cin >> brr[i][j];
        }
    }
    int ans[m][p];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            ans[i][j] = 0;
        }
    }
    cout << "now we will multiply the matrices. " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
            {
                ans[i][j] = arr[i][k] * brr[k][j];
            }
        }
    }
    cout << "your matrix multiplied successfully. " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << ans[i][j] << endl;
            }
        }
    }
    return 0;
}

// next greatest element
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int arr[5] = {12, 56, 37, 91, 23};
    for (int i = 0; i < 5; i++)
    {
        int next = -1;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        cout << arr[i] << "--->" << next << endl;
    }
    return 0;
}
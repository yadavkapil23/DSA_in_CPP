#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> maxi;

    priority_queue<int, vector<int>, greater<int>> mini;

    // Line 8: priority_queue<int, vector<int>, greater<int>> mini;
    // This line creates a priority queue named mini with the following specifications:
    // priority_queue: This is the container class provided by the C++ Standard Template Library (STL) for implementing priority queues.
    // int: This is the data type of the elements that will be stored in the priority queue.
    // vector<int>: This is the underlying container used to store the elements of the priority queue. In this case, a vector is used, which is a dynamic array that can grow or shrink as elements are added or removed.
    // greater<int>: This is a custom comparator that determines the order of elements in the priority queue. By default, a priority queue in C++ is a max heap, but by using greater<int>, we make it a min heap.
    // How greater<int> works:
    // greater is a functor (a function object) that takes two arguments and returns true if the first argument is greater than the second.
    // When used as a comparator in the priority queue, greater<int> reverses the default ordering, making it a min heap.
    // In a min heap, the smallest element is always at the top, and elements are ordered in ascending order.

    maxi.push(12);
    maxi.push(56);
    maxi.push(37);
    maxi.push(89);

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << endl;
        maxi.pop();
    }

    mini.push(4);
    mini.push(1);
    mini.push(5);
    mini.push(2);

    int m = mini.size();
    for (int j = 0; j < m; j++)
    {
        cout << mini.top() << endl;
        mini.pop();
    }

    return 0;
}
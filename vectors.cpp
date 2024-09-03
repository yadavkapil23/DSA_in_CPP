// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.emplace_back(78);
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(90);
    v.push_back(12);
    v.push_back(82);
    v.push_back(10);
    v.push_back(97);
    v.push_back(23);
    v.push_back(56);
    for (auto element : v)
    {
        cout << element << endl;
    }

    vector<int>::iterator it = v.begin();
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    vector<int> numbers = {1, 2, 3, 4, 5};

    // Iterate over the vector in reverse order
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it)
    {
        std::cout << *it << endl;
    }

    cout << "we are now using the reverse end : " << endl;
    cout << v[0] << endl;
    cout << v.at(0) << endl;
    cout << v.back() << endl;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // ERASE FUNCTION IN VECTOR
    v.erase(v.begin() + 1); // it will erase the second element.
    for (auto element : v)
    {
        cout << element << endl;
    }

    v.erase(v.begin(), v.begin() + 2); // it will erase the first two

    for (auto element : v)
    {
        cout << element << endl;
    }

    /// NOW WE WILL STUDY THE INSERT FUNCTION.
    vector<int> v2(2, 100);
    for (auto element : v2)
    {
        cout << element << endl;
    }

    v2.insert(v2.begin(), 999);
    for (auto element : v2)
    {
        cout << element << endl;
    }

    v2.insert(v2.begin() + 2, 2, 89); // insert at 3rd position
    for (auto element : v2)
    {
        cout << element << endl;
    }

    v.swap(v2);
    for (auto element : v2)
    {
        cout << element << endl;
    }

    cout << "------------";
    for (auto element : v)
    {
        cout << element << endl;
    }

    v.clear(); /// erases the entire vector.

    return 0;
}
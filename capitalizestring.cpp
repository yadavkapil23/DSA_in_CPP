#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Linux is the best OS in the world.";
    cout << 'a' - 'A' << endl;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    cout << "now we are converting the same string into the lowercase : " << endl;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout << str << endl;

    // or we can also do the same thing by using the transform function -
    string n = "amcerusofhnwdyueafigdhwuf";
    transform(n.begin(), n.end(), n.begin(), ::toupper);
    cout << n << endl;
    return 0;
}
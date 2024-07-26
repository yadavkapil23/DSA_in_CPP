#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter a String of Numbers : ";
    getline(cin, s);
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;
    return 0;
}
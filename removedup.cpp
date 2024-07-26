#include <bits/stdc++.h>
using namespace std;
string removedup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string rest = removedup(s.substr(1));
    if (ch == rest[0])
    {
        return rest;
    }
    return (rest + ch);
}
int main()
{
    string s;
    getline(cin, s);
    cout << removedup(s) << endl;
    return 0;
}
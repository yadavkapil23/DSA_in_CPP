#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "enter the string : ";
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
}
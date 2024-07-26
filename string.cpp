#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1(5, 'n'); // it will print the n 5 times.
    cout << str1 << endl;

    string str;
    getline(cin, str);
    cout << str << endl;

    string s1 = "hello dear user ,";
    string s2 = "welcome to the Linux.";
    s1.append(s2);
    cout << s1 << endl;
    string s3 = s1 + s2;
    cout << s3 << endl;

    string abc = "United States of america";
    abc.clear();
    cout << abc << endl;
    return 0;
    bool flag = false;
    string s1 = "Linux";
    string s2 = "Windows";
    cout << s2.compare(s1) << endl;
    if (s2.compare(s1) == 0)
    {
        return true;
    }
    if (flag)
    {
        cout << "equal hai" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }

    // now checking for a individual string.
    if (s1.empty())
    {
        cout << "s1 , string is empty" << endl;
    }
    if (!s1.empty())
    {
        cout << "strings are not empty." << endl;
    }
    cout << s1.erase(2, 1) << endl;
    cout << s1.find("ux") << endl;
    cout << s1.insert(2, "will") << endl;
    cout << s1.size() << endl;
    bool flag = false;
    string s1 = "Linux";
    string s2 = "Windows";
    cout << s2.compare(s1) << endl;
    if (s2.compare(s1) == 0)
    {
        return true;
    }
    if (flag)
    {
        cout << "equal hai" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }

    // now checking for a individual string.
    if (s1.empty())
    {
        cout << "s1 , string is empty" << endl;
    }
    if (!s1.empty())
    {
        cout << "strings are not empty." << endl;
    }
    cout << s1.erase(2, 1) << endl;
    cout << s1.find("ux") << endl;
    cout << s1.insert(2, "will") << endl;
    cout << s1.size() << endl;
    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << endl;
    }

    string s = s1.substr(2, 5);
    cout << s << endl;

    string n = "123";
    int x = stoi(n);
    cout << x + 2 << endl;
    cout << to_string(x) + "4" << endl;

    string p = "ajcnemishvfcnaioshdncwisvdbj";
    sort(p.begin(), p.end());
    cout << p << endl;
}
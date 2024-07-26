#include <bits/stdc++.h>
using namespace std;
void reverse(string str)
{
    if (str.length() == 0) // yaha pr hm check kr rahe h ki khi hamare string ki length 0 to , nhi h.
    {
        return;
    }
    string ros = str.substr(1); // hm pehle element ko choddkar baaki string ki ek substring bna lenge. , substring tbhi bnegi jb vo original string se length me km hogi.
    reverse(ros);               // ab us bnayi hui substring ko reverse kr denge.
    cout << str[0];             // ye hamara pehla element print kr dega.
}
int main()
{
    string str;
    getline(cin, str);
    reverse(str);
    //  cout << str;
}

/*Let's say we call reverse("cat"). Here's what happens:

First call: reverse("cat")

Is "cat" empty? No, so we continue.
We set ros = "at" (everything after the first letter)
We call reverse("at")
We wait here. We haven't printed anything yet.


Second call: reverse("at")

Is "at" empty? No, so we continue.
We set ros = "t"
We call reverse("t")
We wait here. Still haven't printed anything.


Third call: reverse("t")

Is "t" empty? No, so we continue.
We set ros = "" (an empty string)
We call reverse("")
We wait here. Still no printing.


Fourth call: reverse("")

Is "" empty? Yes! So we return immediately.



Now, we start completing our waiting function calls:

Third call completes:

We print the first letter of "t", which is 't'
Output so far: "t"


Second call completes:

We print the first letter of "at", which is 'a'
Output so far: "ta"


First call completes:

We print the first letter of "cat", which is 'c'
Final output: "tac"*/

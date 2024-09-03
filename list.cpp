#include <bits/stdc++.h>
using namespace std;
void explainlist()
{
    list<int> ls;
    ls.push_back(2);        // This line adds the integer 2 to the end of the list ls.
    ls.emplace_back(2);     // This line also adds the integer 2 to the end of the list ls. emplace_back is similar to push_back, but it constructs the element in-place, which can be more efficient.
    ls.push_front(5);       // This line adds the integer 5 to the beginning of the list ls.
    ls.emplace_front(2, 4); //
}
int main()
{
    explainlist();
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Let me try to explain it in a different way:
// Push:
// You have a toy box (container) and a toy car (object) already built.
// You put the toy car into the toy box (push).
// If the toy box is full, you need to move all the toys to a bigger toy box, and then you can put the toy car in the new box.
// Emplace:
// You have a toy box (container) and a set of LEGO blocks (arguments).
// You use the LEGO blocks to build the toy car directly inside the toy box (emplace).
// You don't need to build the toy car outside the box and then put it in; you build it right where it will live.
// So, push is like putting an already-built object into the container, while emplace is like building the object directly inside the container using the necessary pieces.

//%20pushstring%20s%20=%20"hello";%20//%20already%20built%20objectvector%3Cstring%3E%20v;v.push_back(s);%20//%20put%20the%20object%20into%20the%20container//%20Emplacevector%3Cstring%3E%20v;v.emplace_back(%22hello%22);%20//%20build%20the%20object%20directly%20in%20the%20container
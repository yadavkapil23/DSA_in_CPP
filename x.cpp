#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int randomoutput = rand() % 3; // here the limit is upto 0-2.
    cout << "Random number is " << randomoutput << endl;
    return 0;
}
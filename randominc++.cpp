#include <iostream>
#include <ctime>   //for time
#include <cstdlib> //for rand or srand
using namespace std;
int main()
{
    srand(time(0));
    string names[] = {"Stone", "Paper", "Scissor"};
    int randomIndex = rand() % 3;
    string selectname = names[randomIndex];
    cout << "Computer Choose" << selectname << endl;
    string input;
    cout<<"Please Choose an input : ";cin>>input;
    if(c)
    return 0;
}
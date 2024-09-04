#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/////////THIS IS GENERATING THE COMPUTER'S CHOICE
char generate_computer_choice()
{
    srand(time(0));
    int choice = rand() % 3;
    if (choice == 0)
    {
        return 'r';
    }
    else if (choice == 1)
    {
        return 'p';
    }
    else
    {
        return 's';
    }
}

//////THIS WILL FIND OUT OUR RESULT
void result(char user_choice, char computer_choice)
{
    if (user_choice == computer_choice)
    {
        cout << "No One Won";
    }
    else if ((user_choice == 'r' && computer_choice == 's') ||
             (user_choice == 'p' && computer_choice == 'r') ||
             (user_choice == 's' && computer_choice == 'p'))
    {
        ;
        cout << "Congrats! You Won." << endl;
    }
    else
    {
        cout << "Computer Wins";
    }
}
int main()
{

    char userChoice;
    char computer_choice;

    std::cout << "Enter your choice (r for rock, p for paper, s for scissors): ";
    std::cin >> userChoice;

    /////////HERE IT WILL PRINT THAT WHAT THE COMPUTER CHOSE.
    computer_choice = generate_computer_choice();
    std::cout << "Computer chose: ";
    if (computer_choice == 'r')
    {
        std::cout << "rock" << std::endl;
    }
    else if (computer_choice == 'p')
    {
        std::cout << "paper" << std::endl;
    }
    else
    {
        std::cout << "scissors" << std::endl;
    }

    // IT WILL PRINT THE RESULT.
    result(userChoice, computer_choice);
    return 0;
}
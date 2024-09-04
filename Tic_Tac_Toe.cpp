#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void printBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " ";
            if (j != 2)
            {
                cout << "| ";
            }
        }
        cout << "\n";
        if (i != 2)
        {
            cout << "---------\n";
        }
    }
}

bool checkWin(char player)
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
        {
            return true;
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
        {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
        return true;
    }

    return false;
}

int main()
{
    char player = 'X';
    int move;
    bool gameOver = false;

    while (!gameOver)
    {
        printBoard();
        cout << "Player " << player << "'s turn. Enter move (1-9): ";
        cin >> move;

        // Validate move
        if (move < 1 || move > 9)
        {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        // Update board
        int row = (move - 1) / 3;
        int col = (move - 1) % 3;
        if (board[row][col] != 'X' && board[row][col] != 'O')
        {
            board[row][col] = player;
        }
        else
        {
            cout << "Space already occupied. Try again.\n";
            continue;
        }

        // Check for win
        if (checkWin(player))
        {
            printBoard();
            cout << "Player " << player << " wins!\n";
            gameOver = true;
        }

        // Switch player
        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}
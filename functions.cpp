#include <iostream>
#include <iomanip>
#include <set>
#include <stdexcept>

const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';

const int BOARD_SIZE = 3;

using namespace std;

void print_board(const char board[3][3])
{
    /*
    Prints the Tic-Tac-Toe board
    */

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "|" << setw(2) << board[i][j] << setw(3);
        }
        if (i < 2)
        {
            cout << "\n_______________\n";
        }
    }
    cout << endl;
}

char player(const char board[3][3])
{
    /*
    Returns whose turn it is.
    If the game just started, X goes first.
    */

    // Variables to count X's and O's
    int X_count = 0;
    int O_count = 0;

    // Loop through rows
    for (int i = 0; i < 3; i++)
    {
        // Loop through columns
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == X)
            {
                X_count++;
            }
            else if (board[i][j] == O)
            {
                O_count++;
            }
        }
    }

    // If less or equal X, return X, else return O
    return (X_count <= O_count) ? X : O;
}

bool isValidMove(const char board[3][3], const pair<int, int> &action)
{
    /*
    Checks if the move is valid.
    */

    return (action.first >= 0 && action.first < BOARD_SIZE &&
            action.second >= 0 && action.second < BOARD_SIZE &&
            board[action.first][action.second] != X && board[action.first][action.second] != O);
}

set<pair<int, int> > actions(const char board[3][3])
{
    /*
    Returns all possible moves.
    */

    set<pair<int, int> > moves;

    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        for (int j = 0; j < BOARD_SIZE; ++j)
        {
            // Check if the cell is empty
            if (board[i][j] != X && board[i][j] != O)
            {
                moves.insert(make_pair(i, j));
            }
        }
    }

    return moves;
}

array<array<char, 3>, 3> result(const array<array<char, 3>, 3> &board, const pair<int, int> &action)
{
    /*
    Returns the board that results from making a move (i, j) on the board.
    */

    // Check if the move is valid
    if (!isValidMove(board.data(), action))
    {
        throw runtime_error("Invalid Move!");
    }

    // Make a deep copy of the board
    array<array<char, 3>, 3> newBoard = board;

    // Get whose turn it is
    char user = player(board.data());

    // Place user (player) in action (empty index on board)
    newBoard[action.first][action.second] = user;

    // Return the new board
    return newBoard;
}

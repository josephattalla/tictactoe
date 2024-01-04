#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include "header.hpp"
using namespace std;


void print_board(const char board[3][3]) 
{
  /*
  Prints board
  */

  // loop through rows
  for (int i = 0; i < 3; i++)
  {
    // loop through columns
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
  If game just started, X goes first.
  */

  // Variables to determine if board is empty, and to count X's and O's
  bool empty;
  int X_count = 0;
  int O_count = 0;

  // loop through rows
  for (int i = 0; i < 3; i++) 
  {
    // loop through columns
    for (int j = 0; j < 3; j++) 
    {
      if (board[i][j] != initial_state[i][j]) 
      {
          empty = false;
          break;
      }
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

  // if board is empty return X
  if (empty)
  {
    return X;
  }

  // if more X's, return O; else return O
  return (X_count <= O_count) ? X : O;

}


set<pair<int, int>> actions(const char board[3][3])
{
  /*
   Returns all possible moves.
  */

    set<pair<int, int>> moves;

    for (int i = 0; i < BOARD_SIZE; ++i) 
    {
        for (int j = 0; j < BOARD_SIZE; ++j) 
        {
            // Check if the cell is empty
            if (board[i][j] != X and board[i][j] != O)
            {
                moves.insert(make_pair(i, j));
            }
        }
    }

    return moves;
}



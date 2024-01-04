#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include "header.hpp"
using namespace std;

char* initial_state()
{
  char board[3][3] = {
  {'1', '2', '3'}, 
  {'4', '5', '6'}, 
  {'7', '8', '9'}
};

}


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
      if (board[i][j] != BOARD[i][j]) 
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
  if (X_count > O_count)
  {
    return O;
  }
  else
  {
    return O;
  }

}

bool gameover(char board[])
{
      if (board[0] == 'x' && board[1] == 'x' && board[2] == 'x') {
    cout << "gameover Player 1 wins!\n";
    return true;
  } else if (board[3] == 'x' && board[4] == 'x' && board[5] == 'x') {
    cout << "gameover Player 1 wins!\n";
    return true;
  } else if (board[6] == 'x' && board[7] == 'x' && board[8] == 'x') {
    cout << "gameover Player 1 wins!\n";
    return true; 
  } else if (board[0] == 'x' && board[3] == 'x' && board[6] == 'x') {
    cout << "gameover Player 1 wins!\n";
    return true;
  } else if (board[1] == 'x' && board[4] == 'x' && board[7] == 'x') {
    cout << "gameover Player 1 wins!\n";
    return true;
  } else if (board[2] == 'x' && board[5] == 'x' && board[8] == 'x') {
    cout << "gameover Player 1 wins!\n";
    return true;
  } else if (board[0] == 'x' && board[4] == 'x' && board[8] == 'x') {
    cout << "gameover Player 1 wins!\n";
    return true;
  } else if (board[2] == 'x' && board[4] == 'x' && board[6] == 'x') {
    cout << "gameover Player 1 wins!\n";
    return true;
  } else if (board[0] == 'o' && board[1] == 'o' && board[2] == 'o') {
    cout << "gameover Player 2 wins!\n";
    return true;
  } else if (board[3] == 'o' && board[4] == 'o' && board[5] == 'o') {
    cout << "gameover Player 2 wins!\n";
    return true;
  } else if (board[6] == 'o' && board[7] == 'o' && board[8] == 'o') {
    cout << "gameover Player 2 wins!\n";
    return true; 
  } else if (board[0] == 'o' && board[3] == 'o' && board[6] == 'o') {
    cout << "gameover Player 2 wins!\n";
    return true;
  } else if (board[1] == 'o' && board[4] == 'o' && board[7] == 'o') {
    cout << "gameover Player 2 wins!\n";
    return true;
  } else if (board[2] == 'o' && board[5] == 'o' && board[8] == 'o') {
    cout << "gameover Player 2 wins!\n";
    return true;
  } else if (board[0] == 'o' && board[4] == 'o' && board[8] == 'o') {
    cout << "gameover Player 2 wins!\n";
    return true;
  } else if (board[2] == 'o' && board[4] == 'o' && board[6] == 'o') {
    cout << "gameover Player 2 wins!\n";
    return true;
  }
  return false;
}
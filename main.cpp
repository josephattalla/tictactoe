#include <iostream>
#include <stdlib.h>
#include "header.hpp"
using namespace std;

// Array for the board
const char BOARD[3][3] = {
  {'1', '2', '3'}, 
  {'4', '5', '6'}, 
  {'7', '8', '9'}
};

// Variables for the players
const char X = 'X';
const char O = 'X';


int main() 
{
  print_board(BOARD);
}
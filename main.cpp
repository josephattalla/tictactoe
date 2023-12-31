#include <iostream>
#include <stdlib.h>
#include "header.hpp"
using namespace std;

//Array for the board
char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

//Variable Declaration
int p1;
int p2;
int turns;



int main() 
{
  //drawboard
  db(board);


  while (turns < 6) 
  {
    //p1 turn
    p1turn(p1, p2, board);

    //draw board
    db(board);

    //add to turns
    turns++;

    //check if game is over
    if (gameover(board) == true)
    {
      return 0;
    }

    //p2 turn
    if (turns < 5) 
    {
      p2turn(p1, p2, board);

      //check if game is over
      if (gameover(board) == true)
      {
        return 0;
      }

      //draw board
      db(board);
    } 
    else 
    {
      cout << "TIE!\n";
      return 0;
    }
  }




}
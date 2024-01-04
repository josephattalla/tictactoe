#include <iostream>
#include <stdlib.h>
using namespace std;

//draw board
void db(char board[]) {
  cout << board[0] << "|" << board[1] << "|" << board[2] << endl;
  cout << "-----" << endl;
  cout << board[3] << "|" << board[4] << "|" << board[5] << endl;
  cout << "-----" << endl;
  cout << board[6] << "|" << board[7] << "|" << board[8] << endl;
}


//player 1 turn
void p1turn(int p1, int p2, char board[]) {
while (p1 < 1 || p1 > 9 || board[p1 - 1] == 'o' || board[p1 - 1] == 'x') {
cout << "Player 1 enter where you would like to go: ";
cin >> p1;
}

 switch (p1) {
   case 1:
  if (p1 != p2) {
    board[0] = 'x';
    p1 = 1;
  }
    break;
    case 2:
      if (p1 != p2) {
    board[1] = 'x';
    p1 = 2;
  }
  
    break;
    case 3:
      if (p1 != p2) {
    board[2] = 'x';
    p1 = 3;
  }
    break;
    case 4:
      if (p1 != p2) {
    board[3] = 'x';
    p1 = 4;
  }
    break;
    case 5:
      if (p1 != p2) {
    board[4] = 'x';
    p1 = 5;
  }
    break;
    case 6:
      if (p1 != p2) {
    board[5] = 'x';
    p1 = 6;
  }
    break;
    case 7:
      if (p1 != p2) {
    board[6] = 'x';
    p1 = 7;
  }
    break;
    case 8:
      if (p1 != p2) {
    board[7] = 'x';
    p1 = 8;
  }
    break;
    case 9:
      if (p1 != p2) {
    board[8] = 'x';
    p1 = 9;
  }
    break;
    default:
    std::cout << "Invalid\n";
    break;
 }
}

//p2 turn
void p2turn(int p1, int p2, char board[]) {
while (p2 < 1 || p2 > 9 || board[p2 - 1] == 'x' || board[p2 - 1] == 'o') {
cout << "Player 2 enter where you would like to go: ";
cin >> p2;
}

 switch (p2) {
   case 1:
  if (p1 != p2) {
    board[0] = 'o';
  }
    break;
    case 2:
      if (p1 != p2) {
    board[1] = 'o';
  }
    break;
    case 3:
      if (p1 != p2) {
    board[2] = 'o';
  }
    break;
    case 4:
      if (p1 != p2) {
    board[3] = 'o';
  }
    break;
    case 5:
      if (p1 != p2) {
    board[4] = 'o';
  }
    break;
    case 6:
      if (p1 != p2) {
    board[5] = 'o';
  }
    break;
    case 7:
      if (p1 != p2) {
    board[6] = 'o';
  }
    break;
    case 8:
      if (p1 != p2) {
    board[7] = 'o';
  }
    break;
    case 9:
      if (p1 != p2) {
    board[8] = 'o';
  }
    break;
    default:
    std::cout << "Invalid\n";
    break;
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
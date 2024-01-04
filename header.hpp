#include <iostream>
#include <iomanip>
#include <set>
#include <stdexcept>
#include <array>

const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';

const int BOARD_SIZE = 3;

using namespace std;

void print_board(const array<array<char, BOARD_SIZE>, BOARD_SIZE>& board);
char player(const array<array<char, BOARD_SIZE>, BOARD_SIZE>& board);
bool isValidMove(const array<array<char, BOARD_SIZE>, BOARD_SIZE>& board, const pair<int, int>& action);
set<pair<int, int>> actions(const array<array<char, BOARD_SIZE>, BOARD_SIZE>& board);
array<array<char, BOARD_SIZE>, BOARD_SIZE> result(const array<array<char, BOARD_SIZE>, BOARD_SIZE>& board, const pair<int, int>& action);

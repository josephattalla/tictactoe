// Variables for the players
const char X = 'X';
const char O = 'O';

// returnsinital state
char* initial_state();
// print board
void print_board(const char board[3][3]);
// return whose turn
char player(const char board[3][3]);
bool gameover(char board[]);
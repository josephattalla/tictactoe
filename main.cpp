#include 


int main()
{
    // Example usage:
    array<array<char, 3>, 3> exampleBoard = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    pair<int, int> exampleAction = make_pair(1, 1);

    try
    {
        array<array<char, 3>, 3> newBoard = result(exampleBoard, exampleAction);

        // Display the new board
        print_board(newBoard.data());
    }
    catch (const runtime_error &e)
    {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
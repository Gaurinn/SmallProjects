#include <iostream>

using namespace std;

const int BOARDSIZE = 3;

void view_board(char board[][BOARDSIZE]) {
    for (int i = 0; i < BOARDSIZE; i++){
        for (int j = 0; j < BOARDSIZE; j++) {
            cout << board[i][j] << " ";
    }
    cout << endl;
    }
}

char get_input(char player){

    char input = '0';

    cout << player << " position: ";
    cin >> input;



    while(input != '1' || input != '2' || input != '3' ||
            input != '4' || input != '5' || input != '6' ||
            input != '7' || input != '8' || input != '9'){
            cout << "Illegal move";
            cin >> input;

            };


    return player;
}

/*
void next_turn(char board[][BOARDSIZE], char player){

    char input = 'X';

    bool legalMove = true;


    cout << player << " position: ";
    cin >> input;

    if (input != '1' || input != '2' || input != '3' ||
        input != '4' || input != '5' || input != '6' ||
        input != '7' || input != '8' || input != '9'){
        legalMove = false;
        }



    if(input == '1'){
        if (board [0][0] = '1'){
        board[0][0] = player;
        }
        else{
            cout << "Illegal move!" << endl;
        }
    }
    else if(input == '2'){
        if (board [0][1] = '2'){
        board[0][1] = player;
        }
        else{
            cout << "Illegal move!" << endl;
        }
    }
    else if(input == '3'){
        if (board [0][2] = '3'){
        board[0][2] = player;
        }
        else{
            cout << "Illegal move!" << endl;
        }
    }
        else if(input == '2'){
        if (board [0][1] = '2'){
        board[0][1] = player;
        }
        else{
            cout << "Illegal move!" << endl;
        }
    }
        else if(input == '2'){
        if (board [0][1] = '2'){
        board[0][1] = player;
        }
        else{
            cout << "Illegal move!" << endl;
        }
    }
        else if(input == '2'){
        if (board [0][1] = '2'){
        board[0][1] = player;
        }
        else{
            cout << "Illegal move!" << endl;
        }
    }
        else if(input == '2'){
        if (board [0][1] = '2'){
        board[0][1] = player;
        }
        else{
            cout << "Illegal move!" << endl;
        }
    }
        else if(input == '2'){
        if (board [0][1] = '2'){
        board[0][1] = player;
        }
        else{
            cout << "Illegal move!" << endl;
        }
    }
        else if(input == '2'){
        if (board [0][1] = '2'){
        board[0][1] = player;
        }
        else{
            cout << "Illegal move!" << endl;
        }
    }
}
*/
int main()
{

    char player = 'X';
    char input = '0';

    bool gameOver = false;

    char board[BOARDSIZE][BOARDSIZE] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

    view_board(board);

    cout << get_input(player);

    //next_turn(board, player);

/*
    cout << player <<" position: ";
    cin >> input;

    switch (input)
    {
        case '1':
            board[0][0] = player;
            break;
        case '2':
            board[0][1] = player;
            break;
        case '3':
            board[0][2] = player;
            break;
        case '4':
            board[1][0] = player;
            break;
        case '5':
            board[1][1] = player;
            break;
        case '6':
            board[1][2] = player;
            break;
        case '7':
            board[2][0] = player;
            break;
        case '8':
            board[2][1] = player;
            break;
        case '9':
            board[2][2] = player;
            break;
        default:
            cout << "Illegal move!" << endl;
    }
*/


    view_board(board);




    return 0;
}

#include <iostream>

using namespace std;

const int BOARDSIZE = 3;

//printing game board
void view_board(char board[][BOARDSIZE]) {
    for (int i = 0; i < BOARDSIZE; i++){
        for (int j = 0; j < BOARDSIZE; j++) {
            cout << board[i][j] << " ";
    }
    cout << endl;
    }
}
//get player input, error messsage and try again if input is not a number or if spot is already taken
char get_input(char input, char player, char board[][BOARDSIZE]){
    cout << player << " position: ";
    cin >> input;
    return input;
}
//check if input is indeed a number
bool isNumber(char input, bool isLegal){
    if(input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != '6' && input != '7' && input != '8' && input != '9'){
        isLegal = false;
    }
    return isLegal;
}
//check if input number is a legal move
bool isLegalMove(char input, bool isLegal, char board[][BOARDSIZE]){
    if(input == '1'){
        if (board [0][0] != '1'){
        isLegal = false;
        return isLegal;
        }
    }
    else if(input == '2'){
        if (board [0][1] != '2'){
        isLegal = false;
        return isLegal;
        }
    }
    else if(input == '3'){
        if (board [0][2] != '3'){
        isLegal = false;
        return isLegal;
        }
    }
    else if(input == '4'){
        if (board [1][0] != '4'){
        isLegal = false;
        return isLegal;
        }
    }
    else if(input == '5'){
        if (board [1][1] != '5'){
        isLegal = false;
        return isLegal;
        }
    }
    else if(input == '6'){
        if (board [1][2] != '6'){
        isLegal = false;
        return isLegal;
        }
    }
    else if(input == '7'){
        if (board [2][0] != '7'){
        isLegal = false;
        return isLegal;
        }
    }
    else if(input == '8'){
        if (board [2][1] != '8'){
        isLegal = false;
        return isLegal;
        }
    }
    else if(input == '9'){
        if (board [2][2] != '9'){
        isLegal = false;
        return isLegal;
        }
    }
    return isLegal = true;
}
//input X or O in array
void make_move(char input, char player, char board[][BOARDSIZE]){
    if(input == '1'){
        board [0][0] = player;
    }
    else if(input == '2'){
        board [0][1] = player;
    }
    else if(input == '3'){
        board [0][2] = player;
    }
    else if(input == '4'){
        board [1][0] = player;
    }
    else if(input == '5'){
        board [1][1] = player;
    }
    else if(input == '6'){
        board [1][2] = player;
    }
    else if(input == '7'){
        board [2][0] = player;
    }
    else if(input == '8'){
        board [2][1] = player;
    }
    else if(input == '9'){
        board [2][2] = player;
    }
}
//compare all rows and columns and see if there is a winner
char game_status(char board[][BOARDSIZE]){
    ///check horizontal for X win
    if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X'){
        return 'X';
    }
    if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X'){
        return 'X';
    }
    if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X'){
        return 'X';
    }

    ///check vertical for X win
    if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X'){
        return 'X';
    }
    if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X'){
        return 'X';
    }
    if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X'){
        return 'X';
    }

    ///check diagonal for X win
    if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X'){
        return 'X';
    }
    if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'){
        return 'X';
    }

    ///check horizontal for O win
    if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O'){
        return 'O';
    }
    if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O'){
        return 'O';
    }
    if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O'){
        return 'O';
    }

    ///check vertical for O win
    if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O'){
        return 'O';
    }
    if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O'){
        return 'O';
    }
    if(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O'){
        return 'O';
    }

    ///check diagonal for O win
    if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O'){
        return 'O';
    }
    if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'){
        return 'O';
    }
    return '0';
}
//switch player from X to O and vice versa
char switch_players(char player){
    if(player == 'X'){
        player = 'O';
        return player;
    }else player = 'X';
    return player;
}
//announce winner, if there have been 9 moves then print Draw! else use the check variable to determine winner
void announce_winner(char check){
    if(check == 'X' || check == 'O'){
        cout << "Winner is: " << check;
    }else cout << "Draw!";
}
int main()
{
    //input varible for players to enter their move
    char input = '0';
    //variable for both players, gets switched to 'O' in switch_players function
    char player = 'X';
    //run the game loop while checkWin is false
    bool checkWin = false;
    //variable to hold the return from the game_status function
    char check = '0';
    //initialzin Tic Tac Toe board
    char board[BOARDSIZE][BOARDSIZE] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    //counter to determine if Draw
    int counter = 0;

    //game loop
    while(counter < 9)
        do{
            //bool used to determine if input is legal
            bool isLegal = true;
            //view game board
            view_board(board);
            //get input loop until input is legal
            do{
            input = get_input(input, player, board);
            isLegal = isLegalMove(input, isLegal, board);
            isLegal = isNumber(input, isLegal);
                if(!isLegal){
                    cout << "Illegal move!" << endl;
                }
            }while(isLegal == false);

            //now that I am sure that the move is legal, lets make the move
            make_move(input, player, board);

            //check if someone has won the game, if so then jump out of loop
            check = game_status(board);
            if(check == 'X' || check == 'O'){
                checkWin = true;
                counter = 10;
            }

            //if no one has already won the switch players
            player = switch_players(player);

            counter++;
            if(counter == 9){
                checkWin = true;
            }

        }while(checkWin == false);
    //see final board
    view_board(board);

    check = game_status(board);
    announce_winner(check);
    return 0;
}

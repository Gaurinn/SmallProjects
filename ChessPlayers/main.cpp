#include <iostream>
using namespace std;

struct ChessPlayer
{
    string name;
    int birth_year;
    int points;
};

ChessPlayer* create_array(int input)
{
    struct ChessPlayer* new_array = new struct ChessPlayer[input];
    return new_array;
}

void fill_array(ChessPlayer* chessPlayers, int input)
{
    for (int i = 0; i < input; i++)
    {
        cout << "Name: ";
        cin >> chessPlayers[i].name;
        cout << "Year: ";
        cin >> chessPlayers[i].birth_year;
        cout << "Rating: ";
        cin >> chessPlayers[i].points;
    }
}

void print_array(ChessPlayer* chessPlayers, int input)
{
    cout << " " << endl;
    cout << "--- Displaying players ---" << endl;
    for(int i = 0; i < input; i++)
    {
        cout << "Name: " << chessPlayers[i].name << endl;
        cout << "Year: " << chessPlayers[i].birth_year << endl;
        cout << "Rating: " << chessPlayers[i].points << endl;
        cout << " " << endl;
    }
}

void find_best_player(ChessPlayer* chessPlayers, int input)
{
    ChessPlayer best_Player = chessPlayers[0];

    cout << "Highest rated player:" << endl;

    for(int i = 0; i < input; i++)
    {
        if (best_Player.points < chessPlayers[i].points)
        {
            best_Player = chessPlayers[i];
        }
    }
    cout << "Name: " << best_Player.name << endl;
    cout << "Year: " << best_Player.birth_year << endl;
    cout << "Rating: " << best_Player.points << endl;
}

double find_average_rating(ChessPlayer* chessPlayers, int input)
{
    int sum = 0;
    for (int i = 0; i < input; i++)
    {
        sum += chessPlayers[i].points;
    }
    double average = sum / input;
    return average;
}



int main()
{
    int input = 0;

    cout << "Number of players: ";
    cin >> input;

    ChessPlayer* chessPlayers = create_array(input);

    cout << "--- Reading players ---" << endl;
    fill_array(chessPlayers, input);
    print_array(chessPlayers, input);

    find_best_player(chessPlayers, input);

    cout << "Average rating: " << find_average_rating(chessPlayers, input) << endl;

    delete[] chessPlayers;

    return 0;
}

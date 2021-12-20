#include <iostream>

using namespace std;

int humanMove(int& a, int& b){

    cout << "There are " << a << " toothpicks left. Pick 1, 2 or 3 toothpicks: ";

    cin >> b;

    if (a == 1 && (b == 2 || b == 3)){

            b = 4;
        };

    a = a - b;
    return a;
}

int computerMove(int& a, int& b){

    if(a >= 5){
        int c = 0;
        c = 4 - b;
        cout << "I pick " << c << " toothpicks" << endl;
        a = a - c;
        return a;
    };

    if (a == 4){
        a = (a - a) + 1;
        cout << "I pick " << 3 << " toothpicks" << endl;
        return a;
    };
    if (a == 3){
        a = (a - a) + 1;
        cout << "I pick " << 2 << " toothpicks" << endl;
        return a;
    };
    if (a == 2){
        a = (a - a) + 1;
        cout << "I pick " << 1 << " toothpicks" << endl;
        return a;
    };

    if (a == 1){
        a = a - 1;
        cout << "I pick " << 1 << " toothpicks" << endl;
        cout << "You won!" << endl;
        return a;
    };

    if (a == 0){
    cout << "I pick 0 toothpicks" << endl;
    cout << "I won!" << endl;
    return a;
    };

    return a;
}



int main()
{

    int numPicksLeft = 23;

    int humanNumber = '1';


    do{
        humanMove(numPicksLeft, humanNumber);

        while(humanNumber <= 0 || humanNumber >= 4 ){
            cout << "Invalid input! Please pick again." << endl;
            numPicksLeft = numPicksLeft + humanNumber;
            humanMove(numPicksLeft, humanNumber);
        };


        computerMove(numPicksLeft, humanNumber);

    }while(numPicksLeft >= 1);

    return 0;
}

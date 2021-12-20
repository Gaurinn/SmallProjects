#include <iostream>

using namespace std;

int main()
{
    int numberOfTests;

    int number1;
    int number2;

    int counter;

    cin >> numberOfTests;

    for (counter = 1; counter <= numberOfTests; counter++){
    cin >> number1 >> number2;

        if (((number1 >= -20000) && (number1 <= 20000)) && ((number2 >= -20000) && (number2 <= 20000))) {
            cout << number1 + number2 << endl;
        }
    }
    return 0;
}

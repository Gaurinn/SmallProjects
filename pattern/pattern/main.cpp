#include <iostream>

using namespace std;

int main()
{

    int input;

    cout << "Input an integer: ";
    cin >> input;

    while (input > 0) {
        for (int i = 1; i <= input; i++) {
            cout << "*";
        }
        cout << endl;
        input--;
    }

    return 0;
}

#include <iostream>
using namespace std;

const int MAX_SIZE = 15;

void input_array(int numbers[], int input) {

    for (int i = 0; i < input; i++){
        cin >> numbers[i];
    }
}


bool isArrayAscending(int numbers[], int input) {

    for (int i = 0; i < input - 1; i++) {

        if (numbers[i] > numbers[i + 1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    int numbers[MAX_SIZE];
    int input = 0;

    cin >> input;

    input_array(numbers, input);

    if (isArrayAscending(numbers, input)) {
        cout << "The array is in ascending order." << endl;
    }
    else {
        cout << "The array is not in ascending order." << endl;
    }

    return 0;
}

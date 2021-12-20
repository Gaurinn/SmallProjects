#include <iostream>
using namespace std;

const int MAX_SIZE = 15;

void input_array(int numbers[], int input) {

    for (int i = 0; i < input; i++){
        cin >> numbers[i];
    }
}

void print_array(int numbers[], int input) {

    for (int i = 0; i < input; i++) {
        cout << numbers[i] << " ";
    }
}

void print_array_reverse(int numbers[], int input) {

    for (int i = input - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
}

void print_array_oddNumbers(int numbers[], int input) {

    for (int i = 0; i < input; i++) {
        if (numbers[i] % 2 != 0){
            cout << numbers[i] << " ";
        }
        }
}

void print_array_oddIndex(int numbers[], int input) {

    for (int i = 0; i < input; i++) {
            cout << numbers[i] << " ";
            i++;
    }
}

int main()
{
    int numbers[MAX_SIZE];
    int input = 0;

    cin >> input;

    input_array(numbers, input);

    print_array(numbers, input);

    cout << endl;

    print_array_reverse(numbers, input);

    cout << endl;

    print_array_oddNumbers(numbers, input);

    cout << endl;

    print_array_oddIndex(numbers, input);


    return 0;
}

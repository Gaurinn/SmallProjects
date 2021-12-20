#include <iostream>
using namespace std;

const int MAX_SIZE = 15;

int array_lowest(int numbers[], int input) {

    int low = numbers[0];

    for (int i = 0; i < input; i++) {

        if (numbers[i] < low){
            low = numbers[i];
        }
    }
return low;
}

void input_array(int numbers[], int input) {

    for (int i = 0; i < input; i++){

        cin >> numbers[i];
    }
}

int main()
{
    int numbers[MAX_SIZE];
    int input = 0;

    cin >> input;

    input_array(numbers, input);

    cout << array_lowest(numbers, input) << endl;

    return 0;
}

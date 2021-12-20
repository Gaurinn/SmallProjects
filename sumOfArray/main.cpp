#include <iostream>

using namespace std;

const int MAX_SIZE = 15;


int array_addition(int numbers[], int input) {

    int sum = 0;

    for (int i = 0; i < input; i++) {

        sum = sum + numbers[i];
    }
return sum;
}


int main()
{


    int numbers[MAX_SIZE];

    int input = 0;

    cin >> input;

    for (int i = 0; i < input; i++){

        cin >> numbers[i];
    }

    cout << array_addition(numbers, input) << endl;

    return 0;
}

#include <iostream>

using namespace std;

const int MAX_SIZE = 15;


double array_average(int numbers[], int input) {

    double sum = 0.0;

    for (int i = 0; i < input; i++) {

        sum = sum + numbers[i];
    }


return sum / input;
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
/*
    for (int i = 0; i < input; i++){

        cin >> numbers[i];
    }
*/

    input_array(numbers, input);

    cout << array_average(numbers, input) << endl;

    return 0;
}

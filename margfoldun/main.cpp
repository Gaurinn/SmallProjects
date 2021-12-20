#include <iostream>

using namespace std;

int main()
{
    int tests = 0;
    int firstNumber = 0;
    int secondNumber = 0;
    int result = 0;

    cin >> tests;

    for (int i = 0; i < tests; i++){
         cin >> firstNumber >> secondNumber >> result;

         if (result == firstNumber * secondNumber){
            cout << "True" << endl;
         }
         else {
            cout << "False" << endl;
         }
    }

    return 0;
}

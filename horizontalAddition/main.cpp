#include <iostream>
#include <cmath> /* ceil, log10 */
using namespace std;

// function declarations go here


int add_next_digit(int& sum, int& n){

    int b = 0;

    sum = 0;

    b = n % 10;
    //sum = sum + n;
    sum = sum + b;

    n = n / 10;

return n;
}


void swap_values(int& sum, int& n){

    int a = n;
    n = sum;
    sum = a;


}


int main(){

    int n;
    int sum = 0;

    cin >> n;

    while(n >= 10){

        int len = ceil(log10(n + 1));

        for(int i = 0; i < len; i++){

            cout << add_next_digit(sum, n);

            if(n > 0){
                cout << " + ";
            }
        }

        cout << " = " << sum << endl;

        swap_values(sum, n);

    };

    cout << "Single digit is: " << n << endl;

    return 0;
}

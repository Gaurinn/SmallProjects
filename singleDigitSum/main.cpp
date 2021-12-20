#include <iostream>
using namespace std;

// function declaration goes here
int single_digit_sum(int& n){

    int sum = 0;

    while(n != 0){

        sum = sum + n % 10;

        n = n / 10;
    }

    n = sum;
    sum = 0;

    while(n != 0){

        sum = sum + n % 10;

        n = n / 10;
    }

    if(sum == 10){
        sum = 1;
    }


return sum;
}

int main(){

    int n;

    cin >> n;

    cout << "Single digit is: " << single_digit_sum(n) << endl;

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

double get_input(){
    double a;
    cin >> a;
    return a;
}

double calc_input(double a, double b){

    //double total = pow(a, b);
    double total = 1;

    //if the exponent is a negative then turn the exponent to a positive and return 1/total
    if (b <= -1){
        b = b *(-1);

        for (int i = 0; i < b; i++){
        total = total * a;
    }
    total = (1.0)/(total);
    return total;
    }

    //if the exponent is not a negative then do the calculations and return total
    for (int i = 0; i < b; i++){
        total = total * a;
    }
    return total;
}

char get_results(double& base, double& exponent, double& total, char& try_again){
    cout << base << " to the power " << exponent << " = " << total << endl;
    cout << "Continue? ";
    cin >> try_again;
    return try_again;
}

int main()
{

    double base = 0;
    double exponent = 0;
    double total = 0;
    char try_again = 'y';

    do{
        cout << "Base: ";
        base = get_input();

        cout << "Exponent: ";
        exponent = get_input();

        total = calc_input(base, exponent);

        get_results(base, exponent, total, try_again);

    }while(try_again == 'y' || try_again == 'Y');

    return 0;
}

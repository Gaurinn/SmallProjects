#include <iostream>

using namespace std;

double celsiusToFahrenheit(double c) {
    double fahrenheit = c * 1.8 + 32;
    return fahrenheit;
}


int main()
{

    double input;

    cout << "Input maximum celsius: ";

    cin >> input;


    for (int i; i <= input; i++)
    {

        cout << i << " " << celsiusToFahrenheit(i) << endl;
    }

    return 0;
}

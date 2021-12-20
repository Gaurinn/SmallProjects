#include <iostream>
using namespace std;

void temperature(int celsius, double& fahrenheit, double& kelvin){
    fahrenheit = 1.8 * celsius + 32;
    kelvin = celsius + 273.15;
}

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    int celsius = 0;
    int high = 0;

    double fahrenheit = 0;
    double kelvin = 0;

    cin >> celsius >> high;

    cout << "Cels " << "Fahrenheit " << "Kelvin" << endl;
    while(celsius <= high){
        temperature(celsius, fahrenheit, kelvin);
        cout << celsius << " " << fahrenheit << " " << kelvin << endl;
        celsius = celsius + 2;
    }

    return 0;
}

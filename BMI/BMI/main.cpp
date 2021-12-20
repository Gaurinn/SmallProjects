#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int weight;
    double height;

    cout << "Weight:"<< endl;
    cin >> weight;

    cout << "Height:" << endl;
    cin >> height;

    cout << fixed << setprecision(2) << "BMI:\n" << weight / (height * height);


    return 0;
}

#include <iostream>

using namespace std;

double formula(double x, double y, double z){
    double result = 0.0;
    result = ((3 * x) + y)/(z + 2);
    return result;
}

int main()
{
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    cin >> x >> y >> z;

    cout << formula(x, y, z) << endl;

    return 0;
}

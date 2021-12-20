#include <iostream>

using namespace std;

int main()
{
    double weight;
    double height;

    cin >> weight >> height;

    if (weight / (height * height) < 18.5) {
        cout << "Undirvigt";
    }
    else if (weight / (height * height) >= 18.5 && weight / (height * height) < 30) {
        cout << "Flott/ur";
    }
    else if (weight / (height * height) >= 30){
        cout << "Yfirvigt";
    }



    return 0;
}

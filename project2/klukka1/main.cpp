#include <iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;

    if (N >= 0 && N < 18) {
        cout << "Daginn!";
    }
    else if (N >= 18 && N <24) {
        cout << "Bleller!";
    }
    else {
        cout << "Rangt inntak";
    }

    return 0;
}

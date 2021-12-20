#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int choice;

    cout << "Input two integer numbers followed by:\n1 for doing addition,\n2 for doing subtraction,\n3 for doing multiplication,\nanything else for not doing any calculation." << endl;

    cin >> a >> b >> choice;

    if (choice == 1) {
        cout << a << "+" << b << "=" << a + b;
    }
    else if (choice ==2) {
        cout << a << "-" << b << "=" << a - b;
    }
    else if (choice ==3) {
        cout << a << "*" << b << "=" << a * b;
    }
    /*else {
        cout << a << " " << b;
    }*/
    return 0;
}

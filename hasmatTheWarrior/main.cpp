#include <iostream>

using namespace std;

int main()
{

    int tests = 0;
    int a = 0;
    int b = 0;

    cin >> tests;

    for (int i = 0; i < tests; i++){
        cin >> a >> b;
        int c = 0;

        if(a >= b){
            c = a - b;
        }
        else {
            c = b - a;
        }


        cout << c << endl;

    }


    return 0;
}

#include <iostream>

using namespace std;

int get_input(int a){
    cin >> a;
    return a;
}

void fibonacci(int a, int b, int input){

    int n = 25;

    int c = 0;

    for (int i = 3; i <= n; ++i)
    {
        c = a + b;
        a = b;
        b = c;

        if (input == 1 || input == 2){
        cout << 1;
        break;
        }

        if (input == i){
        cout << c << " ";
        break;
        }
        //cout << c << " ";
    }
}


int main()
{
    int a = 1;
    int b = 1;
    int input = 0;

    input = get_input(input);

    fibonacci(a, b, input);

    return 0;
}

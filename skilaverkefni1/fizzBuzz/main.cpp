#include <iostream>

using namespace std;

int get_input(int a){
    cin >> a;
    return a;
}

void fizzbuzz(int a){

    for(int i = 1; i <= a; i++){

        if(i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz" << endl;
            continue;
        }
        if(i % 3 == 0){
            cout << "Fizz" << endl;
            continue;
        }
        if(i % 5 == 0){
            cout << "Buzz" << endl;
            continue;
        }
        cout << i << endl;
    }
}



int main()
{
    int n = 0;
    n = get_input(n);

    fizzbuzz(n);

    return 0;
}

#include <iostream>

using namespace std;

int get_number(){
    int a;
    cin >> a;
    return a;
}

void odd_numbers_in_range_with_for_loop(int a, int b){

    int i;
    for (i = a; i <= b; i++) {
        if (i % 2 !=0){
        cout << i << " ";
        }
    }

}

void odd_numbers_in_range_with_while_loop(int a, int b){
    while (a <= b ){
        if (a % 2 !=0){
        cout << a << " ";
        }
    a++;
    }
}


int main() {

    int a = get_number();
    int b = get_number();

    odd_numbers_in_range_with_for_loop(a, b);
    cout << endl;
    odd_numbers_in_range_with_while_loop(a, b);

    return 0;
}

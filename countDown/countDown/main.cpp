#include <iostream>

using namespace std;

int get_number(){
    int a;
    cin >> a;
    return a;
}

void count_down_with_for_loop(int a){
    int i;
    for (i = a; i >= 0; i--) {
        cout << i << " ";
    }
}

void count_down_with_while_loop(int a){
    while (a >= 0 ){
    cout << a << " ";
    a--;
    }
}

int main() {

    int a = get_number();
    count_down_with_for_loop(a);
    cout << endl;
    count_down_with_while_loop(a);

    return 0;
}

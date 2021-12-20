#include <iostream>

using namespace std;

int kr5000(int& input){
    int c = input / 5000;
    input = input - (c * 5000);
    return c;
}
int kr1000(int& input){
    int c = input / 1000;
    input = input - (c * 1000);
    return c;
}
int kr500(int& input){
    int c = input / 500;
    input = input - (c * 500);
    return c;
}
int kr100(int& input){
    int c = input / 100;
    input = input - (c * 100);
    return c;
}
int kr50(int& input){
    int c = input / 50;
    input = input - (c * 50);
    return c;
}
int kr10(int& input){
    int c = input / 10;
    input = input - (c * 10);
    return c;
}
int kr5(int& input){
    int c = input / 5;
    input = input - (c * 5);
    return c;
}
int kr1(int& input){
    int c = input / 1;
    input = input - (c * 1);
    return c;
}
int main()
{

    int input = 0;
    cin >> input;

    cout << kr5000(input) << " x 5000 kr." << endl;

    cout << kr1000(input) << " x 1000 kr." << endl;

    cout << kr500(input) << " x 500 kr." << endl;

    cout << kr100(input) << " x 100 kr." << endl;

    cout << kr50(input) << " x 50 kr." << endl;

    cout << kr10(input) << " x 10 kr." << endl;

    cout << kr5(input) << " x 5 kr." << endl;

    cout << kr1(input) << " x 1 kr." << endl;

    return 0;
}

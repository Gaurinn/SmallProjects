#include <iostream>

using namespace std;

int main()
{

    int n0;
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;
    int n7;
    int n8;
    int n9;

    int sum = 0;
    int positiveNumberCount = 0;
    int negativeNumberCount = 0;


    cin >> n0 >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9;

    if (n0 > 0) {
        sum = sum + n0;
        positiveNumberCount ++;
    }
    else {
    negativeNumberCount ++;
    }

    if (n1 > 0) {
        sum = sum + n1;
        positiveNumberCount ++;
    }
    else {
        negativeNumberCount ++;
    }

    if (n2 > 0) {
        sum = sum + n2;
        positiveNumberCount ++;
    }
    else {
        negativeNumberCount ++;
    }

    if (n3 > 0) {
        sum = sum + n3;
        positiveNumberCount ++;
    }
    else {
    negativeNumberCount ++;
    }

    if (n4 > 0) {
        sum = sum + n4;
        positiveNumberCount ++;
    }
    else {
        negativeNumberCount ++;
    }

    if (n5 > 0) {
        sum = sum + n5;
        positiveNumberCount ++;
    }
    else {
        negativeNumberCount ++;
    }

    if (n6 > 0) {
        sum = sum + n6;
        positiveNumberCount ++;
    }
    else {
        negativeNumberCount ++;
    }

    if (n7 > 0) {
        sum = sum + n7;
        positiveNumberCount ++;
    }
    else {
        negativeNumberCount ++;
    }

    if (n8 > 0) {
        sum = sum + n8;
        positiveNumberCount ++;
    }
    else {
    negativeNumberCount ++;
    }

    if (n9 > 0) {
        sum = sum + n9;
        positiveNumberCount ++;
    }
    else {
        negativeNumberCount ++;
    }

    cout << sum << endl;
    cout << positiveNumberCount << endl;
    cout << negativeNumberCount << endl;

    return 0;
}

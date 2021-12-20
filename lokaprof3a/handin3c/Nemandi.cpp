#include <iostream>
#include "Nemandi.h"
#include <string.h>


using namespace std;

Nemandi::Nemandi(const int number, const double grade1, const double grade2)
{
    _studentNumber = number;
    _grade1 = grade1;
    _grade2 = grade2;
}

Nemandi::Nemandi(const int number, const double grade1, const double grade2, char* nam)
{
    _studentNumber = number;
    _grade1 = grade1;
    _grade2 = grade2;
    for(int i = 0; i < 20; i++){
        _nam[i] = nam[i];
    }
}


void Nemandi::birta()
{
    cout << "Numer: " << _studentNumber << endl;
    cout << "Einkunn 1: " << _grade1 << endl;
    cout << "Einkunn 2: " << _grade2 << endl;

    for(unsigned int i = 0; i < strlen(_nam); i++){
        cout << _nam[i];
    }
    cout << endl;

}

 bool operator < (const Nemandi& leftSide, const Nemandi& rightSide)
 {
    double leftAvg = 0;
    double rightAvg = 0;

    leftAvg = (leftSide._grade1 + leftSide._grade2) / 2;
    rightAvg = (rightSide._grade1 + rightSide._grade2) / 2;

    if(leftAvg < rightAvg){
        return true;
    }
    return false;

 }

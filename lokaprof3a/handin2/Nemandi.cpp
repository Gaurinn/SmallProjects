#include <iostream>
#include "Nemandi.h"


using namespace std;

Nemandi::Nemandi(const int number, const double grade1, const double grade2)
{
    _studentNumber = number;
    _grade1 = grade1;
    _grade2 = grade2;
}

void Nemandi::birta()
{
    cout << "Numer: " << _studentNumber << endl;
    cout << "Einkunn 1: " << _grade1 << endl;
    cout << "Einkunn 2: " << _grade2 << endl;

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

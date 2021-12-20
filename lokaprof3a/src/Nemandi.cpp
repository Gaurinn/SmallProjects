#include <iostream>
#include "Nemandi.h"
#include <string.h>
#include <cstring>


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
    strcpy(_nam, nam);
}


void Nemandi::birta()
{
    cout << "Numer: " << _studentNumber << endl;
    cout << "Einkunn 1: " << _grade1 << endl;
    cout << "Einkunn 2: " << _grade2 << endl;
    cout << "Namslina: " << _nam << endl;


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

ostream& operator <<(ostream& outs, const Nemandi& student){

    outs << "Numer: " << student._studentNumber << endl;
    outs << "Einkunn 1: " << student._grade1 << endl;
    outs << "Einkunn 2: " << student._grade2 << endl;
    outs << "Namslina: " << student._nam << endl;

    return outs;
}

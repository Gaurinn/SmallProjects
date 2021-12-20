#ifndef TIME_H
#define TIME_H
#include<iostream>
using namespace std;

#include <iomanip>

///hint use setw and setf

class Time
{
    private:
        int hours;
        int minutes;
        int seconds;

    public:

        Time();

        Time(int h, int m, int s);

        friend ostream& operator << (ostream& outs, const Time& t);

        friend istream& operator >> (istream& ins, Time& t);

        friend Time operator + (Time& left_side, Time right_side);

        friend Time operator - (Time left_side, Time right_side);

        friend bool operator < (Time& left_side, Time& right_side);

        void normalize();
};
#endif // TIME_H

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
        void normalize();
    public:

        Time();

        Time(int h, int m, int s);

        friend ostream& operator << (ostream& outs, const Time& t);

        friend istream& operator >> (istream& ins, Time& t);

        friend Time operator + (const Time& left_side, const Time& right_side);

        friend Time operator - (const Time& left_side, const Time& right_side);

        friend bool operator < (const Time& left_side, const Time& right_side);

};
#endif // TIME_H

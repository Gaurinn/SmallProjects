#include "Time.h"

Time::Time(){
    //basic constructor

    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time(int h, int m, int s){
    //constructor for three int variables

    hours = h;
    minutes = m;
    seconds = s;

}

ostream& operator << (ostream& outs, const Time& t) {
    //operator overloading, making it possible to use cout << on a Time variable

    outs << setfill ('0') << setw (2) << t.hours << ":" << setfill ('0') << setw (2) << t.minutes << ":" << setfill ('0') << setw (2) << t.seconds << endl;

    return outs;
}

istream& operator >> (istream& ins, Time& t) {
    //operator overloading, making it possible to use cin >> on a Time variable
    ins >> t.hours;
    ins >> t.minutes;
    ins >> t.seconds;
    t.normalize();
    return ins;
}

Time operator + (const Time& left_side, const Time& right_side){
    //operator overloading, making it possible to use + operator on two Time variables
    Time result;
    result.hours = left_side.hours + right_side.hours;
    result.minutes = left_side.minutes + right_side.minutes;
    result.seconds = left_side.seconds + right_side.seconds;
    result.normalize();

    return result;
}

Time operator - (const Time& left_side, const Time& right_side){
    //operator overloading, making it possible to use - operator on two Time variables
    Time result;
    result.hours = left_side.hours - right_side.hours;
    result.minutes = left_side.minutes - right_side.minutes;
    result.seconds = left_side.seconds - right_side.seconds;
    result.normalize();
    return result;
}

bool operator < (const Time& left_side, const Time& right_side){
    //operator overloading, making it possible to use < operator on two Time variables
    if((left_side.hours < right_side.hours) || (left_side.hours == right_side.hours && left_side.minutes < right_side.minutes) ||
         (left_side.hours == right_side.hours && left_side.minutes == right_side.minutes && left_side.seconds < right_side.seconds))
    {
        return true;
    }
    return false;
}


void Time::normalize()
{
    int s = seconds;
    int m = minutes;
    int h = hours;

    while(s < 0)
    {
        s += 60;
        m--;
    }

    while(m < 0)
    {
        m += 60;
        h--;
    }

    while(h < 0)
    {
        h = h + 24;
    }

    seconds = s % 60;
    minutes = (m + s/60) % 60;
    hours = (h + m/60 + s/3600) % 24;
}





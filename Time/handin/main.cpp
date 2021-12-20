#include <iostream>
#include "Time.h"
using namespace std;

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


int main()
{
    Time t1, t2, t3, t4;

    cin >> t1;
    cin >> t2;
    cin >> t3;

    cout << "Time1: " << t1;
    cout << "Time2: " << t2;
    cout << "Time3: " << t3;

    t4 = t1 + t2;
    cout << "Time4: " << t4;

    t1 = t3 - t4;
    cout << "Time1: " << t1;

    if (t1 < t3)
        cout << "Time1 < Time3" << endl;
    else
        cout << "Time3 >= Time1" << endl;


    Time t5 = t2 + Time(0,0,1);
    if (t5 < t2)
        cout << "Time5 < Time2" << endl;
    else
        cout << "Time5 >= Time2" << endl;


    cout << "Almost midnight: " << Time(0,0,0) - Time(0,0,1) << endl;

    return 0;
}

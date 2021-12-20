#include <iostream>
#include <iomanip>
#include "Nemandi.h"
using namespace std;

int main()
{
    int numer;
    double eink1, eink2;

    cin >> numer >> eink1 >> eink2;
    Nemandi jon(numer, eink1, eink2);

    cin >> numer >> eink1 >> eink2;
    Nemandi gunna(numer, eink1, eink2);

    cout << "Upplysingar um jon:" << endl;
    jon.birta();

    cout << "Upplysingar um gunnu:" << endl;
    gunna.birta();

    if (jon < gunna)
    {
        cout << "jon hefur laegri medaleinkunn en gunna" << endl;
    }
    else
    {
        cout << "gunna hefur laegri medaleinkunn en jon" << endl;
    }


    return 0;
}

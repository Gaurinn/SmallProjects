#include <iostream>
#include <iomanip>
#include "Nemandi.h"
using namespace std;
int main()
{
    int numer;
    double eink1, eink2;
    char nam[20];

    cin >> numer >> eink1 >> eink2 >> nam;
    Nemandi jon(numer, eink1, eink2, nam);

    cin >> numer >> eink1 >> eink2 >> nam;
    Nemandi gunna(numer, eink1, eink2, nam);

    cout << "Upplysingar um jon:" << endl;
    jon.birta();

    cout << "Upplysingar um gunnu:" << endl;
    gunna.birta();

    return 0;
}

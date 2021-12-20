#include <iostream>
#include <iomanip>
#include "Nemandi.h"
#include <string.h>
using namespace std;
int main()
{
    int numer;
    double eink1, eink2;
    char nam[100];

    cin >> numer >> eink1 >> eink2 >> nam;
    Nemandi jon(numer, eink1, eink2, nam);


    cin >> numer >> eink1 >> eink2 >> nam;
    Nemandi gunna(numer, eink1, eink2, nam);


    cout << "Upplysingar um jon:" << endl;
    jon.birta();
    cout << jon << endl;

    cout << "Upplysingar um gunnu:" << endl;
    gunna.birta();
    cout << gunna << endl;

    return 0;
}

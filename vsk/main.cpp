#include <iostream>

using namespace std;

double priceWithTax(int price){

    double pwt = price * 1.255;
    return pwt;

}

int main()
{
    int price = 0;
    cin >> price;


    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << priceWithTax(price);



    return 0;
}

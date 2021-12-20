#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    double total = 0;

    char insertCoin;


    while(total < 1.50){

        cout << "A packet of candie costs $1.50. You have inserted $"<< total << "." << endl;
        cout << "Please insert coins: \n\tn - Nickel\n\td - Dime\n\tq - Quarter\n\tD - Dollar" << endl;

        cin >> insertCoin;

        switch(insertCoin)
        {
            case 'n':
                total = total + 0.05;
                break;
            case 'd':
                total = total + 0.10;
                break;
            case 'q':
                total = total + 0.25;
                break;
            case 'D':
                total = total + 1.00;
                break;
            default:
                cout << "'" << insertCoin << "'" << " is not a valid coin." << endl;
        }
    }

    if (total >= 1.50) {
        double change = total - 1.50;;
        cout << "Enjoy your candies. Your change is $" << change << ". Please visit again." << endl;
    }

    return 0;
}

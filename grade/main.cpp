#include <iostream>
using namespace std;

// The declaration of read_integer goes here


bool read_integer(int lower_bound, int upper_bound, int& number){

    bool read_integer = false;

    cin >> number;

    if(number >= lower_bound && number <= upper_bound){

        read_integer = true;

    }

return read_integer;


}

int main()
{
    int lower_bound;
    int upper_bound;
    int number;

    // Input the lower bound
    cin >> lower_bound;
    // Input the upper bound
    cin >> upper_bound;

    if(!read_integer(lower_bound, upper_bound, number))
    {
        cout << "The number should be in the range from " << lower_bound << " to " << upper_bound << "." << endl;
    }
    else
    {
        cout << "The number is: " << number << endl;
    }

    return 0;
}

// The implementation of read_integer goes here

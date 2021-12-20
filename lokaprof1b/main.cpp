#include <iostream>

using namespace std;

int main()
{
    int input = 0;
    double sum = 0;
    int counter = 0;

    for(int i = 0; i < 10; i++){
        cin >> input;

        if(input > 0){
            sum = sum + input;
            counter++;
        }
    }

    cout << sum / counter << endl;




    return 0;
}

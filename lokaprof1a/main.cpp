#include <iostream>
using namespace std;

int main()
{
    int input = 0;
    int sum = 0;
    int listSize = 10;

    for(int i = 0; i < listSize; i++){
        cin >> input;
        if(input > 0){
            sum = sum + input;
        }
    }
    cout << sum << endl;

    return 0;
}

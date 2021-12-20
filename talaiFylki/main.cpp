#include <iostream>
using namespace std;
const int MAX_SIZE = 2000;

void putInArray(int* arr, int listSize){
    for (int i = 0; i < listSize; i++){
        cin >> arr[i];
    }
}

int howOften(int* arr, int listSize, int searchNumber){
    int counter = 0;
    for(int i = 0; i < listSize; i++){
        if(arr[i] == searchNumber){
            counter++;
        }
    }
    return counter;
}


int main()
{

    int numbers[MAX_SIZE];
    int listSize = 0;
    int searchNumber = 0;

    cin >> listSize;

    putInArray(numbers, listSize);

    cin >> searchNumber;

    cout << howOften(numbers, listSize, searchNumber) << endl;

    return 0;
}

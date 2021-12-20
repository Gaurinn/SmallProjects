#include <iostream>
#include <string.h>
using namespace std;

void reverse(char* str){

    char* front;
    char* rear;
    char temp;
    int string_length = strlen(str);

    front = str;// front points to the first element in the array
    rear = str + string_length - 1;//rear points to the last element in the array

    while (front < rear) {

        temp = *front;//storing front in temp varible
        *front = *rear;//giving the front variable the value of the rear variable
        *rear = temp;//giving the rear variable the value of the 'temp/front' variable

        front++;//incrementing front
        rear--;//decrementing rear
    }
}

const int LEN = 21;

int main()
{
	char str[LEN];

	cout << "Enter a string: ";
	cin >> str;

	reverse(str);

	cout << "The string reversed: ";
	cout << str;

	return 0;
}

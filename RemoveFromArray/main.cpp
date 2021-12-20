#include <iostream>
using namespace std;


int get_input(int input) {
    cin >> input;
return input;
}

void fill_array(int* my_array, int array_size) {

    for (int i = 0; i < array_size; i++) {
            cout << "Integer number " << i + 1 << ": ";
            cin >> my_array[i];
        }
}

int* remove_from_array(int* my_array, int array_size, int remove_this_number){

    for (int i = 0; i < array_size; i++) {

        if (my_array[i] == remove_this_number) {

            for (int c = i; c < array_size; c++) {
                my_array[c] = my_array[c + 1];
                my_array[array_size] = 0;
            }
        }
    }
return my_array;
}

void print_array(int* my_array, int array_size) {
    for (int i = 0; i < array_size; i++) {

        cout << my_array[i] << endl;
    }

}

int main()
{

    int array_size = 0;
    int remove_this_number = 0;

    cout << "Array size: ";
    array_size = get_input(array_size);


    int* my_array = new int[array_size];

    fill_array(my_array, array_size);


    cout << "Value to remove: ";
    remove_this_number = get_input(remove_this_number);
    cout << endl;

    remove_from_array(my_array, array_size, remove_this_number);

    print_array(my_array, array_size);

    delete[] my_array;
    return 0;
}

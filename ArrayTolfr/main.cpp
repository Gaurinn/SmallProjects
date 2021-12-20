#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int get_size(int input){

 cin >> input;

return input;
}

double* fill_array(double* my_array, int array_size){

    for (int i = 0; i < array_size; i++){
        cin >> my_array[i];
    }

return my_array;
}

double calc_mean(double* my_array, int array_size){

    double sum = 0.0;

    for (int i = 0; i < array_size; i++){
    sum = sum + my_array[i];
    }
return sum / array_size;
}

double calc_stdev(double* my_array, int array_size, double mean){

    double sum = 0.0;

    for (int i = 0; i < array_size; i++) {
        //cout << sqrt((my_array[i] - mean) * (my_array[i] - mean))<< " ";



        sum += sqrt((my_array[i] - mean) * (my_array[i] - mean));

    }
return sum / array_size;
}

int lower_than_mean(double* my_array, int array_size, double mean){

    int counter = 0;

    for (int i = 0; i < array_size; i++)

        if (my_array[i] < mean){
            counter++;
        }

return counter;
}



int main()
{

    int array_size = 0;
    double mean = 0.0;
    double stdev = 0.0;

    array_size = get_size(array_size);

    double* my_array = new double[array_size];

    fill_array(my_array, array_size);

    mean = calc_mean(my_array, array_size);

    stdev = calc_stdev(my_array, array_size, mean);

    cout << fixed << setprecision(3) << "Mean: " << mean << endl;

    cout << fixed << setprecision(3) << "Standard Deviation: " << stdev << endl;

    cout << "Number count lower than mean: " << lower_than_mean(my_array, array_size, mean) << endl;

    delete[] my_array;
    return 0;
}

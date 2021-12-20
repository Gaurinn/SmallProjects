#include <iostream>

using namespace std;

const int MAX_SIZE = 20;



double* averages(double my_array[][MAX_SIZE], int students, int courses){

    double* averages_array = new double [courses];


    for (int i = 0; i < courses; i++){

        double sum = 0.0;

        for (int j = 0; j < students; j++){
            sum += my_array[j][i];
        }
    averages_array[i] = sum / students;
    }
return averages_array;
}




int main()
{

    int students = 0;
    int courses = 0;

    cin >> students;
    cin >> courses;

    double my_array[students][courses];
    for (int i = 0; i < students; i++){
        for (int j = 0; j < courses; j++){
        cin >> my_array[i][j];
        }
    }


    averages(my_array, students, courses);
/*
    double* averages_array = new double [courses];

    double sum = 0.0;

    for (int i = 0; i < courses; i++){
        for (int j = 0; j < students; j++){
            sum += my_array[j][i];
        }
    averages_array[i] = sum / courses;

    sum = 0.0;
    }
*/
    for (int i = 0; i < courses; i++){
        cout << averages_array[i] << " " << endl;
    }


delete[] averages_array;
return 0;
}

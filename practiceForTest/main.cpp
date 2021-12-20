#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
};

Person* new_array(int size)
{
    Person* new_array = new Person[size];
    return new_array;
}


void fill_array(Person* person, int size)
{
    for (int i = 0; i < size; i++){
        cin >> person[i].name;
        cin >> person[i].age;
    }
}

void print_array(Person* person, int size)
{
    for (int i = 0; i < size; i++){
        cout << person[i].name;
        cout << person[i].age;
        cout << endl;
    }
}

double calc_average_age(Person* person, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += person[i].age;
    }
    double average = sum / size;

    return average;

}




int main()
{

    int size;
    cin >> size;

    Person* person = new_array(size);

    fill_array(person, size);
    print_array(person, size);
    cout << "Average age: " << calc_average_age(person, size) << endl;


    return 0;
}

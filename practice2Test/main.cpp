#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

struct Product
{
    string name;
    double price;
};

void input_products(Product products[][MAX_SIZE], int input)
{
    for(int i = 0; i < input; i++)
    {
        for(int j = 0; j < input; j++)
        {
            cin >> products[i][j].name;
            cin >> products[i][j].price;
        }
    }
}

void print_arr(Product products[][MAX_SIZE], int input)
{
    for(int i = 0; i < input; i++)
    {
        for(int j = 0; j < input; j++)
        {

            cout << products[i][j].name;
            cout << products[i][j].price;
        }
    }
}

double* calc_av_price(Product products[][MAX_SIZE], int input)
{
    double* result = new double[input];


    for (int i = 0; i < input; i++)
    {
        double sum = 0;

        for (int j = 0; j < input; j++)
        {
            sum += products[i][j].price;
        }
        result[i] = sum / input;
    }
    return result;
}

void display_results(double* calc_av_price, int input)
{
    for (int i = 0; i < input; i++)
    {
        cout << calc_av_price[i];
    }

}

int main()
{
    int input = 0;
    cin >> input;

    Product products[MAX_SIZE][MAX_SIZE];

    input_products(products, input);

    print_arr(products, input);

    double* average_price = calc_av_price(products, input);


    display_results(average_price, input);

    return 0;
}

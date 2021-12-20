#include <iostream>
using namespace std;

struct Product
{
    string name;
    int number;
    double price;
};

Product* create_array(int input)
{
    struct Product* new_array = new struct Product[input];
    return new_array;
}

void fill_array(Product* products, int input)
{
    for (int i = 0; i < input; i++)
    {
        cout << "Name: ";
        cin >> products[i].name;
        cout << "Number: ";
        cin >> products[i].number;
        cout << "Price: ";
        cin >> products[i].price;
    }
}

void print_array(Product* products, int input)
{
    cout << "Displaying inventory:" << endl;
    for(int i = 0; i < input; i++)
    {
        cout << "Name: " << products[i].name << endl;
        cout << "Number: " << products[i].number << endl;
        cout << "Price: " << products[i].price << endl;
        cout << " " << endl;
    }
}

void find_most_expensive_product(Product* products, int input)
{
    Product most_expensive_product = products[0];

    cout << "Most expensive product:" << endl;

    for(int i = 0; i < input; i++)
    {
        if (most_expensive_product.price < products[i].price)
        {
            most_expensive_product = products[i];
        }
    }


    cout << "Name: " << most_expensive_product.name << endl;
    cout << "Number: " << most_expensive_product.number << endl;
    cout << "Price: " << most_expensive_product.price << endl;


}



int main()
{
    int input = 0;

    cout << "Number of items: ";
    cin >> input;



    Product* products = create_array(input);

    cout << "Reading inventory: " << endl;



    fill_array(products, input);



    print_array(products, input);


    //Product* most_expensive =

    find_most_expensive_product(products, input);



    delete[] products;

    return 0;
}

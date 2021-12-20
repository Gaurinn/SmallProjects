#include <iostream>
#include "Rectangle.h"
using namespace std;


int main()
{
	Rectangle myRectangle(1.0, 1.0);


	myRectangle.input();

	cout << "Area: " << myRectangle.area() << endl;
	cout << "Perimeter: " << myRectangle.perimeter() << endl;

	double len = myRectangle.getLength();
	double width = myRectangle.getWidth();
	myRectangle.setSize(len+1.0, width+1.0);

	cout << "Area: " << myRectangle.area() << endl;
	cout << "Perimeter: " << myRectangle.perimeter() << endl;

	return 0;
}

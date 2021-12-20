#include "Rectangle.h"
#include <iostream>
using namespace std;


Rectangle::Rectangle()
{
    _length = 1.0;
    _width = 1.0;
}

Rectangle::Rectangle(double length, double width) {
    _length = length;
    _width = width;
}

void Rectangle::input(){
    cout << "Length: ";
    cin >> _length;
    cout << "Width: ";
    cin >> _width;
}


double Rectangle::area(){
    return _length * _width;
}

double Rectangle::perimeter(){
    return (_length * 2) + (_width * 2);
}

double Rectangle::getLength(){
    return _length;
}

double Rectangle::getWidth(){
    return _width;
}

void Rectangle::setSize(double length, double width){
    _length = length;
    _width = width;
}


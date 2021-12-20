#include "Circle.h"

Circle::Circle(){
    _radius = 1.0;
    const double PI = 3.14159;
}

Circle::Circle(double radius){
    _radius = radius;
    const double PI = 3.14159;
}

double Circle::area(){
    return (_radius * _radius) * PI;
}

double Circle::perimeter(){
    return 2 * PI * _radius;
}

double Circle::getRadius(){
    return _radius;
}

void Circle::setRadius(double radius){
    _radius = radius;
}

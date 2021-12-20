#include <iostream>
#include "Circle.h"

using namespace std;

void circleInfo(Circle& circle) {
    cout << "Area: " << circle.area() << endl;
    cout << "Perimeter: " << circle.perimeter() << endl;
}

int main() {

    double radius;
    cout << "Radius of circle: ";
    cin >> radius;
    Circle circle(radius);
    circleInfo(circle);
    circle.setRadius(circle.getRadius() + 1.0);
    circleInfo(circle);
    return 0;
}

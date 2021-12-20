#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{
    private:
        const double PI = 3.14159;
        double _radius;

    public:
        Circle();
        Circle(double radius);
        double area();
        double perimeter();
        double getRadius();
        void setRadius(double radius);
};

#endif // CIRCLE_H

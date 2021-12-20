#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{

    private:
        double _length;
        double _width;

    public:
        Rectangle();

        Rectangle(double length, double width);

        void input();
        double area();
        double perimeter();
        double getLength();
        double getWidth();
        void setSize(double length, double width);

};

#endif // RECTANGLE_H

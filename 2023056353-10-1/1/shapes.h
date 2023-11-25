#ifndef SHAPES_H
#define SHAPES_H

class Shape {
    public:
        Shape(double width, double height);
        virtual double getArea() = 0;
    protected:
        double width_,height_;
};
class Triangle : public Shape {
    public:
        Triangle(double width, double height);
        virtual double getArea();
};
class Rectangle : public Shape {
    public:
        Rectangle(double width, double height);
        virtual double getArea();
};
#endif
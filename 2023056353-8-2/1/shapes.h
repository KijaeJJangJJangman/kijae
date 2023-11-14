#ifndef SHAPES_H
#define SHAPES_H
#include <string>
using namespace std;

class Shape {
    public:
        Shape(){};
        Shape(int x, int y, string shape);

        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);

    protected:
        int x_;
        int y_;
        string shape_;
        int width_, height_;
};

class Square : public Shape {
    public:
        Square(int x, int y, int width, string shape);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
};
class Rectangle : public Shape {
    public:
        Rectangle(int x, int y, int width, int height, string shape);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
};
class Diamond : public Shape {
    public:
        Diamond(int x, int y, int width, string shape);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
};

#endif
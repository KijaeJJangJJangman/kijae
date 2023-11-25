#include "shapes.h"
using namespace std;

Shape::Shape(double width, double height){
    width_ = width;
    height_ = height;
}
Triangle::Triangle(double width, double height):Shape(width,height){}
Rectangle::Rectangle(double width, double height):Shape(width,height){}
double Triangle::getArea(){
    return (width_*height_)/2;
}
double Rectangle::getArea(){
    return width_*height_;
}
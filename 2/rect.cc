#include "rect.h"

Rectangle::Rectangle(int width, int height){
    width_ = width;
    height_ = height;
}
Square::Square(int width):Rectangle(width,width){
}
NonSquare::NonSquare(int width, int height):Rectangle(width,height){

}
int Rectangle::getArea(){
    return width_*height_;
}
int Rectangle::getPerimeter(){
    return (width_+height_)*2;
}
void Square::print(){
    std::cout << width_ << "x" << height_ << " Square" << std::endl;
}
void NonSquare::print(){
    std::cout << width_ << "x" << height_ << " NonSquare" << std::endl;
}

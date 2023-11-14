#include "shapes.h"
#include <iostream>

int ab(int x, int y){
    if(x > y){
        return x-y;
    }else{
        return y-x;
    }
}
Shape::Shape(int x, int y, string shape){
    x_ = x;
    y_ = y;
    shape_ = shape;
}
Square::Square(int x, int y, int width, string shape):Shape(x,y,shape){
    width_ = width;
}
Rectangle::Rectangle(int x, int y, int width, int height, string shape):Shape(x,y,shape){
    width_ = width;
    height_ = height;
}
Diamond::Diamond(int x, int y, int width, string shape):Shape(x,y,shape){
    width_ = width;
}
double Square::GetArea(){
    return width_*width_;
}
double Rectangle::GetArea(){
    return width_*height_;
}
double Diamond::GetArea(){  
    return (double)(((2*width_)+1)*((2*width_)+1))/2;
}
int Square::GetPerimeter(){
    return width_*4;
}
int Rectangle::GetPerimeter(){
    return 2*(width_+height_);
}
int Diamond::GetPerimeter(){
    return 4*(width_+1);
}
void Square::Draw(int canvas_width, int canvas_height){
    cout << " ";
    for(int i = 0 ; i < canvas_width ; i++){
        cout << i;
    }
    cout << endl;
    for(int i = 0 ; i < canvas_height ; i++){
        cout << i;
        for(int j = 0 ; j < canvas_width ; j++){
            if(i >= y_ && i < y_ + width_){
                if(j >= x_ && j < x_ + width_){
                    cout << shape_;
                }
                else{
                    cout << ".";
                }
            }
            else{
                cout << ".";
            }
        }
        cout << endl;
    }
    cout << endl;
}
void Rectangle::Draw(int canvas_width, int canvas_height){
    cout << " ";
    for(int i = 0 ; i < canvas_width ; i++){
        cout << i;
    }
    cout << endl;
    for(int i = 0 ; i < canvas_height ; i++){
        cout << i;
        for(int j = 0 ; j < canvas_width ; j++){
            if(i >= y_ && i < y_ + height_){
                if(j >= x_ && j < x_ + width_){
                    cout << shape_;
                }
                else{
                    cout << ".";
                }
            }
            else{
                cout << ".";
            }
        }
        cout << endl;
    }
    cout << endl;
}
void Diamond::Draw(int canvas_width, int canvas_height){
    int c_y = y_ + width_;
    cout << " ";
    for(int i = 0 ; i < canvas_width ; i++){
        cout << i;
    }
    cout << endl;
    for(int i = 0 ; i < canvas_height ; i++){
        cout << i;
        for(int j = 0 ; j < canvas_width ; j++){
            if((ab(c_y, i) + ab(j, x_)) <= width_){
                cout << shape_;
            }else{
                cout << ".";
            }
        }
        cout << endl;
    }
    cout << endl;
}

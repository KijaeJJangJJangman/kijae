#include <iostream>
#include <vector>
#include "canvas.h"
using namespace std;

int ab(int x, int y){
    if(x > y){
        return x-y;
    }else{
        return y-x;
    }
}

Canvas::Canvas(size_t row, size_t col){
    width_ = row;
    height_ = col;
    v = new char*[height_];
    for (int i = 0; i < height_; ++i) {
        v[i] = new char[width_];
    }
    for(int i = 0 ; i < height_ ; i++){
        for(int j = 0 ; j < width_ ; j++){
            v[i][j] = '.';
        }
    }
}
Canvas::~Canvas(){
    for (int i = 0; i < height_; ++i) {
        delete[] v[i];
    }
    delete[] v;
}
void Canvas::Resize(size_t w, size_t h){
    width_ = w;
    height_ = h;
    for(int i = 0 ; i < height_ ; i++){
        for(int j = 0 ; j < width_ ; j++){
            v[i][j] = '.';
        }
    }
}
bool Canvas::DrawPixel(int x, int y, char brush){
    if(x >= 0 && x < height_){
        if(y >= 0 && y < width_){
            v[x][y] = brush;
            return true;
        }   
    }
    return false;
}
void Canvas::Print(){
    cout << " ";
    for(int i = 0 ; i < width_ ; i++){
        if(i >= 10){
            cout << i-10;
        }
        else cout << i;
    }
    cout << endl;
    for(int i = 0 ; i < height_ ; i++){
        if(i >= 10){
            cout << i-10;
        }
        else cout << i;
        for(int j = 0 ; j < width_ ; j++){
            cout << v[i][j];
        }
        cout << endl;
    }
}
void Canvas::Clear(){
    for(int i = 0 ; i < height_ ; i++){
        for(int j = 0 ; j < width_ ; j++){
            v[i][j] = '.';
        }
    }
}
Shape::~Shape(){}
Rectangle::Rectangle(int x, int y, int w, int h, char brush){
    x_ = x;
    y_ = y;
    r_width = w;
    r_height = h;
    brush_ = brush;
}
void Rectangle::Draw(Canvas* canvas){
    for(int i = y_ ; i < y_ + r_height ; i++){
        for(int j = x_ ; j < x_ + r_width ; j++){
            canvas->DrawPixel(i,j,brush_);
        }
    }
}
void Rectangle::PrintInfo(){
    cout << " rect " << x_ << " " << y_ << " " << r_width << " " << r_height << " " << brush_ << endl;
}
UpTriangle::UpTriangle(int x, int y, int s, char brush){
    x_ = x;
    y_ = y;
    size_ = s;
    brush_ = brush;
}
void UpTriangle::Draw(Canvas* canvas){
    int c_x = x_;
    int c_y = y_ + (size_-1);
    for(int i = y_ ; i < y_ + size_ ; i++){
        for(int j = 0 ; j < x_ + size_ ; j++){
            if((ab(j,c_x)+ab(i,c_y)) < size_){
                canvas->DrawPixel(i,j,brush_);
            }
        }
    }
}
void UpTriangle::PrintInfo(){
    cout << " tri_up " << x_ << " " << y_ << " " << size_ << " " << brush_ << endl;
}
DownTriangle::DownTriangle(int x, int y, int s, char brush){
    x_ = x;
    y_ = y;
    size_ = s;
    brush_ = brush;
}
void DownTriangle::Draw(Canvas* canvas){
    int c_x = x_;
    int c_y = y_ - (size_-1);
    for(int i = c_y ; i < c_y + size_ ; i++){
        for(int j = 0 ; j < x_ + size_ ; j++){
            if((ab(j,c_x)+ab(i,c_y)) < size_){
                canvas->DrawPixel(i,j,brush_);
            }
        }
    }
}
void DownTriangle::PrintInfo(){
    cout << " tri_down " << x_ << " " << y_ << " " << size_ << " " << brush_ << endl;
}
Diamond::Diamond(int x, int y, int s, char brush){
    x_ = x;
    y_ = y;
    size_ = s;
    brush_ = brush;
}
void Diamond::Draw(Canvas* canvas){
    int c_x = x_;
    int c_y = y_ + (size_-1);
    for(int i = y_ ; i < c_y + ((2*size_)-1) ; i++){
        for(int j = 0 ; j < x_ + size_ ; j++){
            if((ab(j,c_x)+ab(i,c_y)) < size_){
                canvas->DrawPixel(i,j,brush_);
            }
        }
    }
}
void Diamond::PrintInfo(){
    cout << " diamond " << x_ << " " << y_ << " " << size_ << " " << brush_ << endl;
}
void Shape::Draw(Canvas* canvas){}
void Shape::PrintInfo(){}
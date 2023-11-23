#ifndef CANVAS_H
#define CANVAS_H
#include<iostream>


class Canvas
{
public:
    Canvas(size_t row, size_t col);
    ~Canvas();

    // Chnage this canvas size to w x h. Preserve already existing shapes on the canvas.
    void Resize(size_t w, size_t h);

    // Dot with the brush at (x, y). If (x, y) is outside of the canvas, just ignore it.
    bool DrawPixel(int x, int y, char brush);
    void Print();

    // Erase all (initialize with '.')
    void Clear();

private:
    int width_,height_;
    char** v;
};

class Shape 
{
public:
    virtual ~Shape();
    virtual void Draw(Canvas* canvas);
    virtual void PrintInfo();
protected:
    int x_, y_;
    char brush_;
    
};

class Rectangle : public Shape {
    public:
        int r_width,r_height;
        Rectangle(int x, int y, int w, int h, char brush);
        virtual void Draw(Canvas* canvas);
        virtual void PrintInfo();
};
class UpTriangle : public Shape {
    public:
        int size_;
        UpTriangle(int x, int y, int s, char brush);
        virtual void Draw(Canvas* canvas);
        virtual void PrintInfo();
};
class DownTriangle : public Shape {
    public:
        int size_;
        DownTriangle(int x, int y, int s, char brush);
        virtual void Draw(Canvas* canvas);
        virtual void PrintInfo();
};
class Diamond : public Shape {
    public:
        int size_;
        Diamond(int x, int y, int s, char brush);
        virtual void Draw(Canvas* canvas);
        virtual void PrintInfo();
};

#endif
#include <iostream>
#include "shapes.h"
using namespace std;

int main(){
    int c_w, c_h, x, y, width, height;
    string shape, a;
    cin >> c_w >> c_h;
    while(1){
        cin >> shape;
        if(shape == "rect"){
            cin >> x >> y >> width >> height >> a;
            Rectangle b(x,y,width,height,a);
            cout << "Area: " << b.GetArea() << endl;
            cout << "Perimeter: " << b.GetPerimeter() << endl;
            b.Draw(c_w,c_h);
        }
        else if(shape == "diamond"){
            cin >> x >> y >> width >> a;
            Diamond b(x,y,width,a);
            cout << "Area: " << b.GetArea() << endl;
            cout << "Perimeter: " << b.GetPerimeter() << endl;
            b.Draw(c_w,c_h);
        }
        else if(shape == "square"){
            cin >> x >> y >> width >> a;
            Square b(x,y,width,a);
            cout << "Area: " << b.GetArea() << endl;
            cout << "Perimeter: " << b.GetPerimeter() << endl;
            b.Draw(c_w,c_h);
        }
        else if(shape == "quit"){
            break;
        }
    }
    return 0;
}
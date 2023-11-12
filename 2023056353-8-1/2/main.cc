#include <iostream>
#include "rect.h"

int main(){
    string shape;
    int width, height;
    while(1){
        cin >> shape;
        if(shape == "nonsquare"){
            cin >> width >> height;
            NonSquare ns(width, height);
            ns.print();
            cout << "Area: " << ns.getArea() << endl;
            cout << "Perimeter: " << ns.getPerimeter() << endl;
        }
        else if(shape == "square"){
            cin >> width;
            Square s(width);
            s.print();
            cout << "Area: " << s.getArea() << endl;
            cout << "Perimeter: " << s.getPerimeter() << endl;
        }
        else if(shape == "quit"){
            break;
        }
    }
    return 0;
}

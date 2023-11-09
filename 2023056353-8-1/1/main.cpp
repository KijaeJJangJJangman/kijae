#include <iostream>
#include "number.h"
using namespace std;

int main(){
    string a;
    int n;
    Cube c;
    while(1){
        cin >> a;
        if(a == "number"){
            cin >> n;
            c.setNumber(n);
            cout << "getNumber(): " << c.getNumber() << endl;
        }
        else if(a == "square"){
            cin >> n;
            c.setNumber(n);
            cout << "getNumber(): " << c.getNumber() << endl;
            cout << "getSquare(): " << c.getSquare() << endl;
        }
        else if(a == "cube"){
            cin >> n;
            c.setNumber(n);
            cout << "getNumber(): " << c.getNumber() << endl;
            cout << "getSquare(): " << c.getSquare() << endl;
            cout << "getCube(): " << c.getCube() << endl;
        }
        else if(a == "quit"){
            break;
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
#include "shapes.h"
using namespace std;

int main(){
    string s;
    vector<Shape*> v;
    while(1){
        cin >> s;
        if(s == "r"){
            double a,b;
            cin >> a >> b;
            Rectangle* r = new Rectangle(a,b);
            v.push_back(r);
        }
        if(s == "t"){
            double a,b;
            cin >> a >> b;
            Triangle* t = new Triangle(a,b);
            v.push_back(t);
        }
        if(s == "0"){
            for(int i = 0 ; i < v.size() ; i++){
                cout << v[i]->getArea() << endl;
                delete v[i];
            }
            break;
        }
    }
    v.clear();
    return 0;
}
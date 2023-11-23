#include <iostream>
#include <vector>
#include "canvas.h"
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    Canvas canvas(a,b);
    canvas.Print();
    int num = 0;
    vector<Shape*> o;

    while(1){
        string s;
        cin >> s;
        if(s == "quit") break;
        if(s == "draw"){
            for(vector<Shape*>::iterator it = o.begin(); it != o.end(); it++){
                (*it)->Draw(&canvas);
            }
            canvas.Print();
        }
        if(s == "add"){
            string shape;
            int x,y;
            char brush;
            cin >> shape;
            if(shape == "rect"){
                int w,h;
                cin >> x >> y >> w >> h >> brush;
                Rectangle* rect = new Rectangle(x,y,w,h,brush);
                o.push_back(rect);
            }
            if(shape == "tri_down"){
                int size;
                cin >> x >> y >> size >> brush;
                DownTriangle* tri_down = new DownTriangle(x,y,size,brush);
                o.push_back(tri_down);
            }
            if(shape == "tri_up"){
                int size;
                cin >> x >> y >> size >> brush;
                UpTriangle* tri_up = new UpTriangle(x,y,size,brush);
                o.push_back(tri_up);
            }
            if(shape == "diamond"){
                int size;
                cin >> x >> y >> size >> brush;
                Diamond* diamond = new Diamond(x,y,size,brush);
                o.push_back(diamond);
            }
        }
        if(s == "resize"){
            int w, h;
            cin >> w >> h;
            canvas.Resize(w,h);
            canvas.Clear();
            for(vector<Shape*>::iterator it = o.begin(); it != o.end(); it++){
                (*it)->Draw(&canvas);
            }
        }
        if(s == "dump"){
            int cnt = 0;
            for(vector<Shape*>::iterator it = o.begin(); it != o.end(); it++){
                cout << cnt;
                (*it)->PrintInfo();
                cnt += 1;
            }
        }
        if(s == "delete"){
            int cnt = 0;
            int num;
            cin >> num;
            for(vector<Shape*>::iterator it = o.begin(); it != o.end(); it++){
                if(cnt == num){
                    delete *it;
                    o.erase(it);
                    break;
                }
                else cnt += 1;
            }
            canvas.Clear();
            for(vector<Shape*>::iterator it = o.begin(); it != o.end(); it++){
                (*it)->Draw(&canvas);
            }
        }
    }
    for(vector<Shape*>::iterator it = o.begin() ; it != o.end() ; it++){
        delete *it;
    }
    return 0;
}

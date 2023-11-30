#include <iostream>
#include "clocks.h"
#include <vector>
using namespace std;

int main(){
    vector<Clock*> v;
    int second;
    cin >> second;
    SundialClock* s = new SundialClock(0,0,0);
    CuckooClock* c = new CuckooClock(0,0,0);
    GrandFatherClock* g = new GrandFatherClock(0,0,0);
    WristClock* w = new WristClock(0,0,0);
    AtomicClock* a = new AtomicClock(0,0,0);
    v.push_back(s);
    v.push_back(c);
    v.push_back(g);
    v.push_back(w);
    v.push_back(a);
    for(int i = 0 ; i < v.size() ; i++){
        v[i]->reset();
    }
    cout << "Reported clock times after resetting:"<<endl;
    for(int i = 0 ; i < v.size() ; i++){
        v[i]->displayTime();
    }
    cout << "\nRunning the clocks...\n\n";
    for(int i = 0 ; i < v.size() ; i++){
        for(int j = 0 ; j < second ; j++){
            v[i]->tick();
        }
    }
    cout << "Reported clock times after running:" << endl;
    for(int i = 0 ; i < v.size() ; i++){
        v[i]->displayTime();
        delete v[i];
    }
    v.clear();
    return 0;
}
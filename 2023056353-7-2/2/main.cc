#include <iostream>
#include "setfunc.h"
using namespace std;

int main(){
    string a;
    set<int> b;
    while(1){
        getline(cin,a);
        if(a == "0"){
            break;
        }
        else{
            b = parseSet(a);
            print(b);
        }
    }
    return 0;
}
#include <iostream>
#include "intset.h"

int main(){
    string cmd;
    int n;
    IntegerSet a;
    while(1){
        cin >> cmd;
        if(cmd == "add"){
            cin >> n;
            a.AddNumber(n);
        }
        else if(cmd == "del"){
            cin >> n;
            a.DeleteNumber(n);
        }
        else if(cmd == "get"){
            cin >> n;
            int b = a.GetItem(n);
            cout << b << endl;
        }
        else if(cmd == "quit"){
            break;
        }
    }
    return 0;
}
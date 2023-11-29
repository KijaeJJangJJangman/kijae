#include <iostream>
#include "my_string.h"
using namespace std;


int main(){
    string s;
    string c;
    MyString a,b;
    int n;
    while(1){
        cin >> s;
        if(s == "new"){
            cout << "enter a" << endl;
            cin >> a;
            cout << "enter b" << endl;
            cin >> b;
        }
        if(s == "a"){
            cin >> n;
            MyString output = a*n; 
            cout << output << endl;
        }
        if(s == "b *"){
            cin >> n;
            MyString output = b*n;
            cout << output << endl;
        }
        if(s == "a + b"){
            MyString output = a+b;
            cout << output;
        }
        if(s == "b + a"){
            MyString output = b+a;
            cout << output;
        }
        if(s == "quit"){
            break;
        }
    }
    return 0;
}

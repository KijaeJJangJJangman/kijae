#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int a2 = a;
    int b2 = b;
    while(b2 != 0){
        int c = a2%b2;
        a2 = b2;
        b2 = c;
    }
    cout << a2 << endl;
    cout << (a*b)/a2;
    return 0;
}
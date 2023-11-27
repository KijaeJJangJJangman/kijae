#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 4;
    double c = static_cast<double>(a)/b;
    cout << c << endl;
    return 0;
}
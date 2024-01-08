#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int bunja = 1, bunmo = 1;
    if(b == 0){
        cout << "1" << endl;
    }else{
        for(int i = 1 ; i <= b ; i++){
            bunja *= a;
            a--;
            bunmo *= i;
        }
        cout << bunja/bunmo;
    }
    return 0;
}
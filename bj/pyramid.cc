#include <iostream>
using namespace std;

int main(){
    while(1){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }
        int num = n*(n+1)/2;
        cout << num << endl;
    }
    return 0;
}
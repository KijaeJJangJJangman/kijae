#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int start_num = 1;
    int new_num = 7;
    int n;
    cin >> n;
    if(n == 1){
        cout << 1;
        return 0;
    }
    for(int i = 2 ; i < 100000 ; i++){
        if(n > start_num && n <= new_num){
            cout << i;
            return 0;
        }else{
            start_num = new_num;
            new_num += 6*i;
        }
    }
}
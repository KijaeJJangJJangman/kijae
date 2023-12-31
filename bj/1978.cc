#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int pcnt = 0;
    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        int cnt = 0;
        for(int j = 1 ; j < a ; j++){
            if(a%j==0){
                cnt++;
            }
        }
        if(cnt == 1){
            pcnt++;
        }
    }
    cout << pcnt;
    return 0;
}
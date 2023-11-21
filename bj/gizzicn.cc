#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(n ; n>= 1 ; n--){
        cout << n << "\n";
    }
    return 0;
}
//2742번 endl로 할 경우 시간초과 되고 \n으로 해야됨 아마 버퍼 처리떄문에 그런 듯?
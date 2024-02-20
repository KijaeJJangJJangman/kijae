#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    int arr[6];
    for(int i = 1 ; i < n ; i++){
        arr[0] = i%10;
        arr[1] = (i%100)/10;
        arr[2] = (i%1000)/100;
        arr[3] = (i%10000)/1000;
        arr[4] = (i%100000)/10000;
        arr[5] = i/100000;
        if(i + arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] == n){
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
//그냥 막 써본건데 이게 한 번에 맞네 뭐지
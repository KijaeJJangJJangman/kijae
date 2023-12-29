#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int w, h, num;
        cin >> h >> w >> num;
        int mod = num%h;
        int hosu = (num/h)+1;
        if (mod == 0) {
            mod = h;
            hosu -= 1;
        }
        if(hosu >= 10){
            cout << mod << hosu << endl;
        }
        else{
            cout << mod << "0" << hosu << endl;
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int mul = a*b*c;
    int arr[10] = {0};
    for(int i = mul ; i > 0 ; i /= 10){
        arr[i%10]++;
    }
    for(int i = 0 ; i < 10 ; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
//최소 7자리에서 10자리
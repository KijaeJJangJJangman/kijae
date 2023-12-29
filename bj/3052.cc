#include <iostream>
using namespace std;

int main(){
    int arr[42] = {0};
    int num[10];
    for(int i = 0 ; i < 10 ; i++){
        cin >> num[i];
    }
    for(int i = 0 ; i < 10 ; i++){
        int mod = num[i]%42;
        arr[mod]++;
    }
    int sum = 0;
    for(int i = 0 ; i < 42 ; i++){
        if(arr[i] != 0){
            sum += 1;
        }
    }
    cout << sum;
    return 0;
}
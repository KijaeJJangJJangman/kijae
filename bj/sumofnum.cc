#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char* arr = new char[n];
    cin >> arr;
    int sum = 0;
    for(int i = 0 ; i < n; i++){
        sum += ((int)arr[i]-'0');
    }
    cout << sum;
    delete[] arr;
    return 0;
}
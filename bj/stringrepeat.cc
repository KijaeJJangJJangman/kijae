#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int k = 0 ; k < n ; k++){
        string* arr = new string[2];
        for(int i = 0 ; i < 2; i++){
            cin >> arr[i];
        }
        for(int i = 0 ; i < arr[1].size() ; i++){
            for(int j = 0 ; j < stoi(arr[0]) ; j++){
                cout << arr[1][i];
            }
        }
        cout << endl;
        delete[] arr;
    }
    return 0;
}
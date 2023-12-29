#include <iostream>
using namespace std;

int main(){
    int arr[26];
    for(int i = 0 ; i < 26 ; i++){
        arr[i] = -1;
    }
    string s;
    cin >> s;
    for(int i = 0 ; i < s.length() ; i++){
        int value = s[i]-'a';
        if(arr[value] == -1){
            arr[value] = i;
        }
    }
    for(int i = 0 ; i < 26 ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
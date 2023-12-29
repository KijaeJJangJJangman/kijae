#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0;  i < n; i++){
        int ocnt = 1;
        int score = 0;
        string s;
        cin >> s;
        for(int j = 0 ; j < s.length() ; j++){
            if(s[j] == 'O'){
                score += ocnt++;
            }
            else{
                ocnt = 1;
            } 
        }
        cout << score << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    while(1){
        string s;
        cin >> s;
        if(s == "0")break;
        string s2(s.length(), ' '); //크기를 지정하고 공백으로 초기화
        for(int i = 0 ; i < s.length() ; i++){
            s2[i] = s[s.length()-1-i];
        }
        if(s.compare(s2) == 0)cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
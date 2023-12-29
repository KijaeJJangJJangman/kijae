#include <iostream>
#include <vector>
using namespace std;

int main(){
    string str1,str2;
    int n;
    vector<char> v;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> str1 >> str2;
        for(int j = 0 ; j < str1.size() ; j++){
            if(str1[j] == 'x' || str1[j] == 'X'){
                if(str2[j] >= 'a' && str2[j] <='z'){
                    v.push_back(str2[j]-32);
                }
                else{
                    v.push_back(str2[j]);
                }
            }
        }
    }
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i];
    }
    return 0;
}
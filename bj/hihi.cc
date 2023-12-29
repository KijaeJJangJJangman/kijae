#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size, n;
    vector<char>v;
    char a;
    cin >> size >> n;
    for(int i = 0 ; i < size ; i++){
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0 ; i < n ; i++){
        int cnt = 0;
        for(int j = 0 ; j < v.size()-1 ; j++){
            if(v[j] == 'w' && v[j+1] == 'h'){
                char tmp = v[j+1];
                v[j+1] = v[j];
                v[j] = tmp;
                cnt++;
            }
        }
        if(cnt == 0){
            break;
        }
    }
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i];
    }
    v.clear();
    return 0;
}
#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,int> m;
    int n;
    int index = 0;
    for(int i = 1;  i <= 9 ; i++){
        cin >> n;
        m.insert({n,i});
    }
    for(auto iter = m.begin() ; iter != m.end() ; iter++){
        index++;
        if(index == 9){
            cout << iter->first << endl << iter->second;
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    map<string, int> ma;
    vector<string> v;
    int n, m;
    cin >> n >> m;
    for(int i = 0 ; i < n+m ; i++){
        string s;
        cin >> s;
        ma[s]++;
        if(ma[s] > 1){
            v.push_back(s);
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for(auto o : v){
        cout << o << "\n";
    }
}
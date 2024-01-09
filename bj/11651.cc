#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int, int>> v;
int n;
int main(){
    cin >> n;
    for(int i = 0 ; i < n; i++){
        pair<int,int> tmp;
        cin >> tmp.second >> tmp.first;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i].second << " " << v[i].first << "\n";
    }
    return 0;
}

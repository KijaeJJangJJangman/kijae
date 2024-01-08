#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int>> v;
int n;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    cin >> n;
    pair<int,int> tmp;
    for(int i = 0 ; i < n ; i++){
        cin >> tmp.first >> tmp.second;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}

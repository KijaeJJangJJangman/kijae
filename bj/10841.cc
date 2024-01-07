#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
vector<pair<int,string>> v;
int n;
bool compare(pair<int,string> a, pair<int,string> b){
    return a.first < b.first;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    pair<int,string> tmp;
    for(int i = 0 ; i<n;i++){
        cin >> tmp.first >> tmp.second;
        v.push_back(tmp);
    }
    stable_sort(v.begin() , v.end(), compare);//stable_sort는 원래의 순서를 손상시키지 않으면서 정렬하는 sort(bubblesort나 heapsort가 stable sort류의 sort이다)
    for(int i = 0 ; i<n ; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}
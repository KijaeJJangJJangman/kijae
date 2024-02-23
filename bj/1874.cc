#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0 ; i < n ;i++){
        int a;
        cin >> a;
        v.push_back(a);
        if(v[i] > v[i-1] && v[i] < v[i-2]){
            cout << "NO";
            return 0;
        }
    }
    
}

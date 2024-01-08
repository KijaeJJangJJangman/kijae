#include <iostream>
#include <queue>
#include <vector>
using namespace std;
queue<int> q;
int n,k;
vector<int> v;

int main(){
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++){
        q.push(i);
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < k-1 ; j++){
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }
    
    cout << "<";
    for(int i = 0 ; i < v.size()-1 ; i++){
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1] << ">";
    return 0;
}
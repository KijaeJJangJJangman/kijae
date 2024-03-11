#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    stack<int> s;
    vector<char> c;
    int cnt = 1;
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        int x;
        cin >> x;
        while(cnt <= x){
            s.push(cnt);
            cnt++;
            c.push_back('+');
        }
        if(s.top()==x){
            s.pop();
            c.push_back('-');
        }else{
            cout << "NO";
            return 0;
        }
    }
    for(int i = 0 ; i < c.size() ; i++){
        cout << c[i] << "\n";
    }
}

//스택 수열 문제
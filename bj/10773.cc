#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    stack<int> s;
    int n,a;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a;
        if(a == 0){
            s.pop();
        }else{
            s.push(a);
        }
    }
    int sum = 0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout << sum;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> num;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        if(a < x){
            num.push_back(a);
        }
    }
    for(int i = 0 ; i < num.size() ; i++){
        cout << num[i] << " ";
    }
    return 0;
}
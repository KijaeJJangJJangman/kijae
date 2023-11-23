#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,n1,n2;
    cin >> n;
    vector<int> a, b;
    for(int i = 0 ;  i < n ; i++){
        cin >> n1 >> n2;
        a.push_back(n1);
        b.push_back(n2);
    }
    for(int i = 0 ; i<n ; i++){
        cout << a[i]+b[i] << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    int arr[100000] = {};
    arr[0] = 0;
    for(int i = 1 ; i <= n ; i++){
        int a;
        cin >> a;
        arr[i] = arr[i-1] + a;
    }
    int start, end;
    for(int i = 0 ; i < m ; i++){
        cin >> start >> end;
        cout << arr[end] - arr[start-1] << "\n";
    }
    return 0;
}
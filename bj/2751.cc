#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int arr[1000000];
int n;
int main(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i = 0 ; i < n; i++){
        cout << arr[i] << "\n";
    }
    return 0;
}
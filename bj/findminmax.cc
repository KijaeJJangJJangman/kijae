#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,num;
    cin >> n;
    vector<int> arr;
    for(int i = 0 ; i < n; i++){
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());
    cout << arr[0] << " " << arr[n-1];
    return 0;
}
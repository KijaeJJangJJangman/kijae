#include <iostream>
#include <algorithm>
using namespace std;

unsigned int ans,n,k,list[10000];

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> k >> n;
    unsigned int maxl = 0;
    for(int i = 0 ; i < k ; i++){
        cin >> list[i];
        maxl = max(maxl,list[i]);
    }
    unsigned int left = 1,right = maxl, mid;
    while(left <= right){
        mid = (left+right)/2;
        unsigned int now = 0;
        for(int i = 0 ; i < k ; i++){
            now += list[i]/mid;
        }
        if(now >= n){
            left = mid + 1;
            ans = max(ans,mid);
        }else{
            right = mid-1;
        }
    }
    cout << ans;
    return 0;
}
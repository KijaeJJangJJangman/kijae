#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int cnt[8001] = {0};

int main(void){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, a;
    double sum = 0;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        cnt[a + 4000]++;
        v.push_back(a);
        sum += a;
    }
    sort(v.begin(), v.end());
    
    double avg = sum / n;
    if(round(avg) == -0){
        cout << 0 << "\n";
    }else{
        cout << round(avg) << "\n";
    }
    
    cout << v[n / 2] << "\n";

    int max_cnt = 0;
    vector<int> mode_candidates;
    for(int i = 0; i < 8001; i++) {
        if(cnt[i] > max_cnt) {
            max_cnt = cnt[i];
            mode_candidates.clear();
            mode_candidates.push_back(i - 4000);
        } else if(cnt[i] == max_cnt) {
            mode_candidates.push_back(i - 4000);
        }   
    }
    if(mode_candidates.size() == 1) {
        cout << mode_candidates[0] << "\n";
    } else {
        sort(mode_candidates.begin(), mode_candidates.end());
        cout << mode_candidates[1] << "\n";
    }
    cout << v[n-1] - v[0] << "\n";
    
    return 0;
}

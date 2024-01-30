#include <iostream>
using namespace std;

int answer[101][15];

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int k,n;
        cin >> k >> n;
        for(int i = 0 ; i <= k ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(i == 0){
                    answer[i][j] = j;
                }else if(j == 1){
                    answer[i][j] = 1;
                }else{
                    answer[i][j] = answer[i][j-1] + answer[i-1][j];
                }
            }
        }
        cout << answer[k][n] << "\n";
    }
    return 0;
}
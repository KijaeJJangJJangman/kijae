#include <iostream>
using namespace std;

int main(){
    int n,m,b;
    int house[500][500];
    int t = 99999999, line = 99999999;
    cin >> n >> m >> b;
    int max = 0, min = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> house[i][j];
            if(max < house[i][j]){
                max = house[i][j];
            }else if(min > house[i][j]){
                min = house[i][j];
            }
        }
    }
    for(int i = min ; i <= max ; i++){
        int remove = 0;
        int stack = 0;
        for(int j = 0 ; j < n ; j++){
            for(int k = 0 ; k < m ; k++){
                if(house[j][k] > i){
                    remove += (house[j][k] - i);
                }else if(house[j][k] < i){
                    stack += (i - house[j][k]);
                }
            }
        }
        if(stack <= remove + b){
            int tmp = remove*2+stack;
            if(t > tmp){
                t = tmp;
                line = i;
            }else if(t == tmp){
                line = i;
            }
        }
    }
    cout << t << " " << line;
    return 0;
}
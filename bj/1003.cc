#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        if(a < 2){
            if(a == 0){
                cout << "1 0\n";
            }else{
                cout << "0 1\n";
            }
        }else{
            int arr[41];
            arr[0] = 1, arr[1] = 1;
            for(int j = 2 ; j <= a ; j++){
                arr[j] = arr[j-1] + arr[j-2];
            }
            cout << arr[a-2] << " " << arr[a-1] << "\n";
        }
    }
    return 0;
}
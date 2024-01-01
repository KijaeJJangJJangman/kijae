#include <iostream>
using namespace std;

int main(){
    int n, num;
    cin >> n >> num;
    int max;
    int* arr = new int[n];
    for(int i = 0 ;i<n ; i++){
        cin >> arr[i];
    }
    max = 0;
    for(int i = 0 ; i < n-2 ; i++){
        for(int j = i+1 ; j < n-1 ; j++){
            for(int k = i+2 ; k < n ; k++){
                int tmp = arr[i]+arr[j]+arr[k];
                if(tmp >= max && tmp <= num){
                    max = tmp;
                }
            }
        }
    }
    cout << max;
    delete[] arr;
    return 0;

}
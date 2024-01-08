#include <iostream>
#include <algorithm>
using namespace std;
int arr1[1000000];
int arr2[1000000];
int main(){
    int n;
    int N,M;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> N >> M;
        for(int i = 0; i < N ; i++){
            cin >> arr1[i];
        }
        for(int i = 0 ; i < M ; i++){
            cin >> arr2[i];
        }
        sort(arr1,arr1+N);
        sort(arr2,arr2+M);
        if(arr2[M-1]>arr1[N-1]){
            cout << "B" << "\n";
        }else{
            cout << "S" << "\n";
        }
    }
    return 0;
}
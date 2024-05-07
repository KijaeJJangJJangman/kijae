#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;

    int* arr = new int[M + 1];
    for (int i = 0; i <= M; i++) {
        arr[i] = i;
    }

    int sqrtM = sqrt(M);
    for (int i = 2; i <= sqrtM; i++) {
        if (arr[i] == 0) continue;
        for (int j = i * 2; j <= M; j += i) {
            arr[j] = 0;
        }
    }

    for (int i = max(N, 2); i <= M; i++) {
        if (arr[i] != 0) {
            cout << arr[i] << "\n";
        }
    }
    
    delete[] arr;
    return 0;
}

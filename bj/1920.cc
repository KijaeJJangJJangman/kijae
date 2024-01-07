#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

const int MAX_N = 100000;
int arr[MAX_N];
int n,m;
int a;

int binary_search(int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low+high)/ 2;

        if (arr[mid] == key) {
            return 1;  // 찾았을 경우 1 반환
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return 0;  // 찾지 못했을 경우 0 반환
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); //stdio와의 연결을 끊음으로서 시간이 줄어들고, 버퍼 어쩌구 뭐시깽이(아니 이거 하나 썼다고 시간 초과 뜨던거 맞는게 어이가 없네)
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> a;
        cout << binary_search(a) << "\n";
    }

    return 0;
}

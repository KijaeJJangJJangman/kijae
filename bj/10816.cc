#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> m;
int N,M,card;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> card;
        m[card]++;
    }
    cin >> M;
    for(int i = 0 ; i < M ; i++){
        cin >> card;
        cout << m[card] << " ";
    }
    return 0;
}
//hash map을 이용한 풀이

#include <iostream>
#include <algorithm>

using namespace std;

int arr[500002];
int N, M, card;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> card;
		arr[i] = card;
	}
	sort(arr, arr + N); // 이분탐색을 위해 오름차순 정렬

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> card;
		cout << upper_bound(arr, arr + N, card) - lower_bound(arr, arr + N, card)<<" ";
	}
}
//이분탐색을 이용한 풀이로 upper_bound는 찾고자 하는 값의 다음 값이 최초로 나타나는 위치이고 lower_bound는 찾고자 하는 값 이상이 처음 나타나는 위치
//즉, 1 2 4 4 6 7에서
//lower_bound(~,~,4)의 결과 : 3 (4 이상의 값이 처음 나타나는 위치)
//upper_bound(~,~,4)의 결과 : 5 (4를 초과하는 값이 처음 나타나는 위치)
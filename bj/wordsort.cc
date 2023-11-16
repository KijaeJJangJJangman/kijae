#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> uniqueWords;  // 중복을 제거하기 위해 set을 사용
    vector<string> arr;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        uniqueWords.insert(word);  // set에 단어 추가
    }

    // set의 내용을 vector로 복사
    arr.assign(uniqueWords.begin(), uniqueWords.end());

    // 단어를 길이에 따라 오름차순 정렬
    sort(arr.begin(), arr.end(), [](const string& a, const string& b) {
        if (a.size() == b.size()) {
            return a < b;
        }
        return a.size() < b.size();
    });

    // 정렬된 결과 출력
    for (const string& word : arr) {
        cout << word << endl;
    }

    return 0;
}

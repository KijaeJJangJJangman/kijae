#include <iostream>
using namespace std;

int main(){
    string s;
    int max = 0;
    char ans;
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++){
        s[i] = tolower(s[i]);
    }
    int arr[26] = {0}; // 알파벳이 a부터 z까지 26개이기 때문에 각각의 알파벳이 몇 개씩 있는지 저장해줄 int형의 배열 선언
    for(int i = 0 ; i < s.size() ; i++){
        arr[s[i]-'a']++;//아스키코드를 이용해 arr에 각 알파벳이 몇 번씩 쓰였는지 저장 ex) arr[0]은 a의 개수 ... arr[25]는 z의 개수
    }
    for(int i = 0 ; i < 26 ; i++){
        if(arr[i] == max){
            ans = '?'; //가장 많이 쓰인 알파벳이 여러개인경우 ? 출력
        }
        else if(arr[i] > max){
            max = arr[i];
            ans = 'A'+i; // 대문자를 출력해야되기 때문에 'A'에 i를 더함
        }
    }
    cout << ans;
    return 0;
}//알파벳으로 이루어진 문자열에서 가장 많이 쓰인 알파벳을 구하는 문제
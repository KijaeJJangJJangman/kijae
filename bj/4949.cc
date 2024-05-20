#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    while (true) {
        getline(cin, s);
        if (s == ".") {
            break;
        }
        stack<char> s1;
        bool balanced = true;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(' || s[i] == '[') {
                s1.push(s[i]);
            } else if (s[i] == ')') {
                if (s1.empty() || s1.top() != '(') {
                    balanced = false;
                    break;
                }
                s1.pop();
            } else if (s[i] == ']') {
                if (s1.empty() || s1.top() != '[') {
                    balanced = false;
                    break;
                }
                s1.pop();
            }
        }

        if (balanced && s1.empty()) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }

    return 0;
}

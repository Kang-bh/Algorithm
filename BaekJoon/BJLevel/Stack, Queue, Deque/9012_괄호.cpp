#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack <char> StringArray;

// ")" -> ")" x 

void solve() {
    int totalLeft = 0; // (
    int totalRight = 0; // )

    while (!StringArray.empty()) {
        char ps = StringArray.top();
        StringArray.pop();

        if (totalLeft == 0 && totalRight == 0) {
            if (ps == '(') {
                cout << "NO" << endl;
                break;
            }
        }

        if (ps == '(') {
            totalLeft++;
        } else if (ps == ')') {
            totalRight++;
        } else {
            continue;
        }

        if (totalRight < totalLeft) {
            cout << "NO" << endl;
            break;
        }

        if (StringArray.empty()) {
            if (totalLeft != totalRight) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
                break;
            }
        }
    }
}

void makeStackEmpty() {
    while (!StringArray.empty()) {
        StringArray.pop();
    }
}

void input(int K) { // 해당 코드 시간초과 가능
    string str;
    for (int i = 0; i < K; i++) {
        cin >> str;

        for (int j = 0; j < str.size(); j++) {
            StringArray.push(str[j]);
        }

        solve();
        makeStackEmpty();
    }
}

int main() {

    int K;
    cin >> K;

    input(K);

    return 0;
}
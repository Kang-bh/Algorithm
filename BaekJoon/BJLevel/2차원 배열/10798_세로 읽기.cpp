#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> arr;
string result;

void solve() {
    for (int i = 0; i < 15; i++ ) {
        for (int j = 0; j < 5; j++) {
            if (arr[j].size() < i+1) {
                continue;
            }

            char chr = arr[j].at(i);
            if (chr) {
                result.push_back(chr);
            }
        }
    }
}

void input() {
    string str;

    for (int i = 0; i < 5; i++) {
        cin >> str;
        arr.push_back(str);
    }
}

int main() {

    input();
    solve();
    cout << result << endl;    

    return 0;
}
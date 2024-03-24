#include <iostream>
using namespace std;

// solve by counting sort

int N, M;
bool arr[1000001] = {false, };

void solve() {
    int num;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        arr[num] = true;
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> num;
        if (arr[num]) {
            cout << "yes ";
        } else {
            cout << "no ";
        }
    }

    cout << endl;
}

int main() {
    solve();
}
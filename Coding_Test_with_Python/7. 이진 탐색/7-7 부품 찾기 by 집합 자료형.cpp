#include <iostream>
#include <set>
#include <utility>
using namespace std;
 /*
    solve by set data structure
    set data structure info : https://blockdmask.tistory.com/79
 */

set<int> object;
int N, M;

void solve() {
    cin >> N;
    int num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        object.insert(num);
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> num;
        if (object.find(num) != object.end()) { // eleement in set
            cout << "yes ";
        } else { // No eleement in set
            cout << "no ";
        }
    }
    cout << "\n";
}

int main() {
    solve();
    return 0;
}
#include <iostream>
using namespace std;

void solve(int& N) {

    int result = 0;

    result += N / 500;
    N = N % 500;
    result += N / 100;
    N = N % 100;
    result += N / 50;
    N = N % 50;
    result += N / 10;

    cout << result << endl;
}

int cnt = 0;
int coin_types[4] = { 500, 100, 50, 10 }; // 화폐 단위를 반복수행

void solve2(int& N) {
    // solve1 에서의 코드 반복 줄일 수 있음.
    for (int i = 0; i < 4; i++) {
        cnt += N / coin_types[i];
        N = N % coin_types[i];
    }

    cout << cnt << endl;

}

int main() {
    int N;

    cin >> N;

    // solve(N);
    solve2(N);

    return 0;
}
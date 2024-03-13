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

int main() {
    int N;

    cin >> N;

    solve(N);

    return 0;
}
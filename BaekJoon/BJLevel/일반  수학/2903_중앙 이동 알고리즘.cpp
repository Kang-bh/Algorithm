#include <iostream>
#include <cmath>
using namespace std;

void solve(int N) {
    cout << (int) pow(pow(2, N) + 1, 2) << endl;
}

int main() {
    int N;
    cin >> N;

    solve(N);
}
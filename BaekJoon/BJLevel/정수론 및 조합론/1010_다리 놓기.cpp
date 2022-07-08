#include <iostream>
using namespace std;

int T;

int DP[31][16] = { 0, };

void sol(int n, int k) {
	if (n == k || k == 0) {
		DP[n][k] = 1;
	}
	else if (k == 1) {
		DP[n][k] = n;
	}
	else {
		if (DP[n][k] == 0) {
			DP[n][k] = DP[n-1][k] + DP[n - 1][k - 1];
		}
	}
}

int main() {

	cin >> T;
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 15; j++) {
			sol(i, j);
		}
	}
	for (int i = 0; i < T; i++) {
		int N, M;
		cin >> N >> M;

		if (N > M/2)
			N = M - N;

		cout << DP[M][N] << "\n";
	}

	return 0;
}
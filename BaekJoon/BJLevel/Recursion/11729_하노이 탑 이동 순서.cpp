#include <iostream>
using namespace std;

int N, cnt = 1;

// solve N : N을 3위치로 옮겨야 한다.

void solve(int N, int start, int arr, int blank) {
	if (N == 1) {
		cout << start << " " << arr << "\n";
	}
	else if (N == 2) {
		cout << start << " " << blank << "\n";
		cout << start << " " << arr << "\n";
		cout << blank << " " << arr << "\n";
	}
	else {
		solve(N - 1, start, blank, arr);
		cout << start << " " << arr << "\n";
		solve(N - 1, blank, arr, start);
	}
}

void count(int N) {
	for (int i = 1; i < N; i++) {
		cnt *= 2;
		cnt++;
	}
}

int main() {
	cin >> N;

	count(N);
	cout << cnt << "\n";
	solve(N, 1, 3, 2);

	return 0;
}
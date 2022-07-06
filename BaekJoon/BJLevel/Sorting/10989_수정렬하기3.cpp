#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	int N;
	cin >> N;

	int check[10001] = { 0, };

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		check[num]++;
	}

	for (int i = 1; i < 10001; i++) {
		while (check[i] != 0) {
			cout << i << "\n";
			check[i]--;
		}
	}

	return 0;
}
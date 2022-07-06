#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> s;

void Input() {
	cin >> N;
	int num;
	for (int i = 0; i < N; i++) {
		cin >> num;
		s.push_back(num);
	}
}

void check() {
	cin >> M;
	int num;
	for (int i = 0; i < M; i++) {
		cin >> num;
		if (binary_search(s.begin(), s.end(), num))
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Input();
	sort(s.begin(), s.end());
	check();
	cout << "\n";

	return 0;
}
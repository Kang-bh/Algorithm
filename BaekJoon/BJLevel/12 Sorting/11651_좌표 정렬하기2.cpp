#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> point;

void Input(int N) {
	int p1, p2;
	for (int i = 0; i < N; i++) {
		cin >> p1 >> p2;
		point.push_back(make_pair(p2, p1));
	}
}

void Print(int N) {
	for (auto iter = point.begin(); iter != point.end(); iter++) {
		cout << iter->second << " " << iter->first << "\n";
	}
}

int main() {

	int N;
	cin >> N;
	
	Input(N);
	sort(point.begin(), point.end());
	Print(N);

	return 0;
}
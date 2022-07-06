#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int N, M;
vector<string> S;

void Input() {
	cin >> N >> M;
	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		S.push_back(str);
	}
}

int main() {
	string str;
	int cnt = 0;

	
	Input();
	sort(S.begin(), S.end());
	for (int i = 0; i < M; i++) {
		cin >> str;
		if (binary_search(S.begin(), S.end(), str))
			cnt++;
	}

	cout << cnt << endl;

	return 0;
}
#include <iostream>
#include <map>
#include <string>
using namespace std;


int Solve(int n) {
	string type, name;

	map<string, int> m;
	int count = 1;

	for (int i = 0; i < n; i++) {
		cin >> name >> type;
		
		if (m.empty()) { // 해당 key 값이 없다면
			m[type] = 1;
		}
		else {
			m[type]++;
		}
	}

	for (auto iter = m.begin(); iter != m.end(); iter++) {
		count *= ((*iter).second + 1);
	}

	return count - 1;
}

int main() {

	int T, n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << Solve(n) << endl;
	}

	return 0;
}
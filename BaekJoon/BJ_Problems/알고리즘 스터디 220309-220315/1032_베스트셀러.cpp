#include <iostream>
#include <string>
#include <map>
using namespace std;


int main() {

	int n;
	map<string, int> m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (m.find(str) == m.end() || m.empty()) {
			// ¾øÀ¸¸é
			m[str] = 1;
		}
		else {
			m[str] += 1;
		}
	}
	int max = 0;
	string result;

	map<string, int>::iterator iter;



	for (iter = m.begin(); iter != m.end(); iter++) {
		if (iter->second > max) {
			max = iter->second;
			result = iter->first;
		}
		else if (iter->second < max) {
			continue;
		}
		else {
			if (result.compare(iter->first) > 0)
				result = iter->first;
		}
	}

	cout << result << endl;

	return 0;
}
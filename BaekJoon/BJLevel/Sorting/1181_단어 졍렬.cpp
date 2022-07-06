#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

	int N;
	string str;
	vector<pair<int, string>> word;

	cin >> N;


	for (int i = 0; i < N; i++) {
		cin >> str;
		bool check = false;
		for (auto iter = word.begin(); iter != word.end(); iter++) {
			if (iter->second == str) {
				check = true;
				break;
			}
		}
		if(!check)
			word.push_back(make_pair(str.size(), str));
	}

	sort(word.begin(), word.end());
	
	for (auto iter = word.begin(); iter != word.end(); iter++) {
		cout << iter->second << "\n";
	}

	return 0;
}
#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

set<string> word;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s, str;
	cin >> s;
	
	for (int i = 1; i <= s.length(); i++) { // 취득 문자열 크기
		for (int j = 0; j < s.length() - i + 1; j++) { // index
			word.insert(s.substr(j, i));
		}
	}

	cout << word.size() << endl;

	return 0;
}
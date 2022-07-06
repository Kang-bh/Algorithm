#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>
using namespace std;

int N, M;
map<string, string> dat1;
map<string, string> dat2;
vector<string> answer;

void Input() {
	cin >> N >> M;
	string S;
	for (int i = 1; i < N + 1; i++) {
		cin >> S;
		dat1.insert({ S, to_string(i) });
		dat2.insert({ to_string(i), S });
	}
}

int main() {

	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Input();
	string s;
	for (int i = 0; i < M; i++) {
		cin >> s;
		if (dat1.find(s) != dat1.end()) {
			answer.push_back(dat1[s]);
		}
		else if (dat2.find(s) != dat2.end())
			answer.push_back(dat2[s]);
		else
			continue;
	}

	for (auto iter = answer.begin(); iter != answer.end(); iter++)
		cout << *iter << "\n";


	return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {

	string name;
	map <string, int> teams;
	int L = 0, O = 0, V = 0, E = 0;
	// ((L+O) × (L+V) × (L+E) × (O+V) × (O+E) × (V+E)) % 100
	cin >> name;
	for (int i = 0; i < name.length(); i++) {
		switch (name[i]) {
		case 'L':
			L++;
			break;
		case 'O':
			O++;
			break;
		case 'V':
			V++;
			break;
		case 'E':
			E++;
			break;
		}
	}
	int N, max = 0;
	string res_team;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int res_L = L, res_O = O, res_V = V, res_E = E;
		string team;
		cin >> team;
		for (int i = 0; i < team.length(); i++) {
			switch (team[i]) {
			case 'L':
				res_L++;
				break;
			case 'O':
				res_O++;
				break;
			case 'V':
				res_V++;
				break;
			case 'E':
				res_E++;
				break;
			}
		}
		int result = ((res_L + res_O) * (res_L + res_V) * (res_L + res_E) * (res_O + res_V) * (res_O + res_E) * (res_V + res_E)) % 100;
		teams[team] = result;

		if (result > max || res_team.empty()) {
			max = result;
			// 알파벳 순
			res_team = team;
		}
		else if (result == max) {
			if (res_team.compare(team) > 0) { // 검사하는 TEAM 이름이 더 빠를 시
				res_team = team;
			}
		}
	}

	cout << res_team << endl;



	return 0;
}
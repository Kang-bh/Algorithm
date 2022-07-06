#include <iostream>
#include <map>
#include <set>
using namespace std;

set<int> A;
set<int> B;
int a, b;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int num, cnt = 0;
	cin >> a >> b;

	for (int i = 0; i < a; i++) {
		cin >> num;
		A.insert(num);
	}

	for (int j = 0; j < b; j++) {
		cin >> num;
		B.insert(num);
	}

	for (auto iter = A.begin(); iter != A.end(); iter++) {
		if (!B.count(*iter))
			cnt++;
	}

	for (auto iter = B.begin(); iter != B.end(); iter++) {
		if (!A.count(*iter))
			cnt++;
	}

	cout << cnt << endl;

	return 0;
}
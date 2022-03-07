#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	vector <int> divisors;

	while (cin >> n) {
		if (n == -1)
			break;
		int num = n;
		for (int i = 1; i < n/2+1; i++) {
			if (n % i != 0)
				continue;
			divisors.push_back(i);
			num -= i;
		}

		// 0 ÀÏ ¶§¸¸
		if (num == 0) {
			cout << n << " = ";
			for (auto iter = divisors.begin(); iter != divisors.end(); iter++) {
				if (iter + 1 == divisors.end()) {
					cout << *iter;
					break;
				}
				cout << *iter << " + ";
			}
			cout << endl;
		}
		else
			cout << n << " is NOT perfect." << endl;
		divisors.clear();
	}


	return 0;
}
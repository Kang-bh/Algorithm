#include <iostream>
using namespace std;

int main() {

	int T; // testcase
	cin >> T;
	int num1, num2;

	for (int i = 0; i < T; i++) {
		cin >> num1 >> num2;

		int low_num, least, greatest;
		low_num = (num1 < num2) ? num1 : num2; // »ïÇ× ¿¬»êÀÚ

		for (int num = low_num; num > 0; num--) {
			if (num1 % num == 0 && num2 % num == 0) {
				least = num;
				break;
			}
		}

		cout << least * (num1 / least) * (num2 / least) << endl;
	}


	return 0;
}
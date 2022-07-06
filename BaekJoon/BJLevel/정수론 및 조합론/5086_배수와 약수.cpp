#include <iostream>
#include <cstring>
using namespace std;

int main() {

	int num1, num2;
	do {
		cin >> num1 >> num2;


		if (num1 == 0 && num2 == 0)
			break;
		// 배수
		if (num1 % num2 == 0)
			cout << "multiple" << "\n";
		// 약수
		else if (num2 % num1 == 0)
			cout << "factor" << "\n";
		else {
			cout << "neither" << "\n";
		}

		// x
	} while(num1 > 0 && num2 > 0);

	return 0;
}
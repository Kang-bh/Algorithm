#include <iostream>
using namespace std;

int fact(int n) {
	if (n < 1)
		return 1;
	return n * fact(n - 1);
}

int Combination(int n, int k) {
	int result = 1;
	int div = fact(k);
	while (k != 0) {
		result *= n;
		n--;
		k--;
	}

	return (result / div);
}

int main() {

	int num1, num2;
	cin >> num1 >> num2;
	if (num2 >= num1 / 2 + 1)
		num2 = num1 - num2;
	cout << Combination(num1, num2) << endl;

	return 0;
}
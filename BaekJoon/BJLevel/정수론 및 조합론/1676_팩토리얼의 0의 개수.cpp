#include <iostream>
using namespace std;

// int 형으로 할 시 초과
int main() {

	int n;
	cin >> n;

	int count_2 = 0;
	int count_5 = 0;
	// 2 * 5 세트가 하나 씩 있는 경우
	while (n != 0) {
		// 2 존재
		int num = n;
		while (num % 2 == 0) {
			num = num / 2;
			count_2++;
		}
		while (num % 5 == 0) {
			num = num / 5;
			count_5++;
		}

		n--;
	}

	if (count_2 > count_5)
		cout << count_5 << endl;
	else
		cout << count_2 << endl;

	return 0;
}
#include <iostream>
using namespace std;

int main() {

	int N, num;
	cin >> N;
	int* num_list = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> num;
		num_list[i] = num;
	}

	// »ğÀÔ Á¤·Ä
	for (int i = 1; i < N; i++) {
		for (int j = i; j > 0; j--) {
			if (num_list[j] < num_list[j - 1]) {
				int temp = num_list[j];
				num_list[j] = num_list[j - 1];
				num_list[j - 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
		cout << num_list[i] << endl;

	delete[] num_list;

	return 0;
}
#include <iostream>
using namespace std;

void Swap(int arr[], int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {

	int N;
	cin >> N;
	int num_list[10] = { -1, };
	int count = 0;

	while (N != 0) {
		int num;
		num = N % 10;
		N = N / 10;
		count++;
		for (int i = 0; i < count; i++) {
			if (num_list[i] != -1) {
				if (num_list[i] >= num)
					continue;
				else {
					// 제 위치 찾은 경우
					for (int j = count-1; j > i; j--) {
						// 한 칸씩 뒤로 밀기
						num_list[j] = num_list[j - 1];
					}
					num_list[i] = num;
					break;
				}
			}
			else {
				num_list[i] = num;
			}

		}
	}


	for (int i = 0; i < count; i++) {
		cout << num_list[i];
	}
	cout << endl;

	return 0;
}
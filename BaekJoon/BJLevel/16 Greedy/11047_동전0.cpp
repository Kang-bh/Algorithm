#include <iostream>
using namespace std;

int main() {

	int N, K;
	cin >> N >> K;
	int* coin_list = new int[N];
	
	int coin;
	for (int i = 0; i < N; i++) {
		cin >> coin;
		coin_list[i] = coin;
	}

	int count = 0;
	while (K != 0) {
		int max_num = 0;
		// 최대 숫자 결정
		for (int i = 0; i < N; i++) {
			if (coin_list[i] <= K)
				max_num = coin_list[i];
			else
				break;
		}
		K -= max_num;
		count++;
	}

	cout << count << endl;

	return 0;
}
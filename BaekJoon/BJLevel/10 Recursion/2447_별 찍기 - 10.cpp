#include <iostream>
#include <cmath>
using namespace std;


int N;
char result[7000][7000];

void Shape(int x, int y, int N){ // 위치정보 + 크기
	if (N == 3) {
		for (int i = y; i < y + 3; i++) {
			for (int j = x; j < x + 3; j++) {
				if (i == y + 1 && j == x + 1)
					result[i][j] = ' ';
				else
					result[i][j] = '*';
			}
		}
	}

	else {
		for (int i = y; i < y + N; i++) {
			for (int j = x; j < x + N; j++) {
				if (x + N/3 <= j && j < x + 2 * N/3 && y + N/3 <= i && i < y + 2 * N/3) {
					result[i][j] = ' ';
				}
				else
					result[i][j] = '*';

			}
		}
		Shape(x, y, N / 3);
		Shape(x + N/3, y, N / 3);
		Shape(x + 2 * N/3, y, N / 3);
		Shape(x, y + N/3, N / 3);
		Shape(x + 2 * N/3, y + N/3, N / 3);
		Shape(x, y + 2 * N/3, N / 3);
		Shape(x + N/3, y + 2 * N/3, N / 3);
		Shape(x + 2 * N/3, y + 2 * N/3, N / 3);
	}
}


void Print() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << result[i][j];
		}
		cout << "\n";
	}
}

int main() {

	cin >> N;

	Shape(0, 0, N);
	Print();

	return 0;
}
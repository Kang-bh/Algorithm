#include <iostream>
#include <limits>
#include <vector>
#include <string>
using namespace std;

// W, B ���� 

int N, M;

int min_count = 32;

vector<string> chess;

void Input() {

	cin >> N >> M;


	string color;

	for (int i = 0; i < N; i++) {
		cin >> color;
		chess.push_back(color);
	}
}

void check(int y, int x) { // y x �� ���� ���� �ε���
	// 8 * 8 �κ�Ȯ��
	char std = chess[y][x];
	int count = 0;
	int check = y % 2 + x % 2;
	//cout << check << endl;
	for (int i = y; i < y + 8; i++) {
		for (int j = x; j < x + 8; j++) {
			int num = (i % 2 + j % 2) % 2;
			if (check % 2 == num) { // ���� ��� ���ڰ� ���ƾ��ϴ� ���
				if (std != chess[i][j]) count++;
			}
			else {
				if (std == chess[i][j]) count++;
			}
			//cout << chess[i][j];
			//if (i % 2 == y % 2) { // ������ 0 2 4 6
			//	if (j % 2 == x % 2) { // ������ 0 2 4 8 ���ذ� ���ƾ� �ϴ� ���
			//		if (std != chess[i][j])
			//			count++;
			//	} else { // ���ذ� �޶�� �ϴ� ���
			//		if (std == chess[i][j])
			//			count++;
			//	}
			//}
			//else { // ������ 1 3 5 7
			//	if (j % 2 == x % 2) { // ������ 0 2 4 6 ���ذ� �޶�� �ϴ� ���
			//		if (std == chess[i][j])
			//			count++;
			//	}
			//	else { // ���ذ� ���ƾ� �ϴ� ���
			//		if (std != chess[i][j])
			//			count++;
			//	}
			//}
		}
	}
	
	if (count > 32) {
		count = 64 - count;
	}

	if (count < min_count) {
		min_count = count;
	}
}

void Solve() {
	for (int y = 0; y < N - 7; y++) {
		for (int x = 0; x < M - 7; x++) {
			check(y, x);
		}
	}
}

int main() {

	Input();
	
	Solve();
	cout << min_count << endl;

	return 0;
}
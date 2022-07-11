#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long x_1, y_1, x_2, y_2, n; // 출발점 도착점
vector<long long> X; // 행성 x 좌표
vector<long long> Y; // 행성 y 좌표
vector<long long> R; // 행성 반지름


void Input() {

	long long x, y, r;

	cin >> x_1 >> y_1 >> x_2 >> y_2;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y >> r;
		X.push_back(x);
		Y.push_back(y);
		R.push_back(r);
	}
}
// 출발점에서 나가기 위해 몇 개 거치는지 + 도착점에 들어가기 위해 몇 개 거치는지

void Sol() {

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		long long distance1 = (x_1 - X[i])* (x_1 - X[i]) + (y_1 - Y[i])* (y_1 - Y[i]); // 중심과 시작 위치와 사이 거리
		long long distance2 = (x_2 - X[i])* (x_2 - X[i]) + (y_2 - Y[i])* (y_2 - Y[i]); // 중심과 도착 위치와 사이 거리

		if (distance1 < R[i] * R[i] && distance2 < R[i] * R[i])
			continue;
		else if (distance2 < R[i] * R[i] && distance1 > R[i] * R[i])
			cnt++; 
		else if (distance1 < R[i] * R[i] && distance2 > R[i] * R[i])
			cnt++;
		else
			continue;

	}

	cout << cnt << "\n";

	X.clear();
	Y.clear();
	R.clear();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		Input();
		Sol();
	}
	return 0;
}
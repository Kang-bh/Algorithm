#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long x_1, y_1, x_2, y_2, n; // ����� ������
vector<long long> X; // �༺ x ��ǥ
vector<long long> Y; // �༺ y ��ǥ
vector<long long> R; // �༺ ������


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
// ��������� ������ ���� �� �� ��ġ���� + �������� ���� ���� �� �� ��ġ����

void Sol() {

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		long long distance1 = (x_1 - X[i])* (x_1 - X[i]) + (y_1 - Y[i])* (y_1 - Y[i]); // �߽ɰ� ���� ��ġ�� ���� �Ÿ�
		long long distance2 = (x_2 - X[i])* (x_2 - X[i]) + (y_2 - Y[i])* (y_2 - Y[i]); // �߽ɰ� ���� ��ġ�� ���� �Ÿ�

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
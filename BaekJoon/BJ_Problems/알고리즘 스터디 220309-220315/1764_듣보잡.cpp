#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string str1, string str2) {
	return str1 < str2;
}

int main() {

	int N, M;
	string str; // ��� �̸�
	vector<string> str1, result; // �赵, ����
	cin >> N >> M;

	for (int i = 0; i < N; i++) { // �赵 ���� ��� �Է¹ޱ�
		cin >> str;
		str1.push_back(str);
	}
	sort(str1.begin(), str1.end());
	for (int j = 0; j < M; j++) { // ���� ���� ��� �Է¹ޱ� => �����鼭 �赵 ���� ���� ��� ã��
		cin >> str;
		// algorithm ����� binary_search �̿�
		if (binary_search(str1.begin(), str1.end(), str)) {
			// str�� ���� �� ã�� �̺�Ž�� algorithm
			result.push_back(str);
				continue;
		}
	}

	// �ð� �ʰ� �߻�
	//for (int size = 0; size < str1.size(); size++) {
	//	for (int k = 0; k < str2.size(); k++) {
	//		if (str1[size] == str2[k]) {
	//			// �赵 ���� ���� ��
	//			result.push_back(str1[size]);
	//			break;
	//		}
	//	}
	//}

	sort(result.begin(), result.end());

	cout << result.size() << endl;
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << endl;


	

	return 0;
}
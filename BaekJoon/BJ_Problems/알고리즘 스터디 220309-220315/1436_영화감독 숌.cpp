#include <iostream>
#include <string>
using namespace std;


int main() {
	
	int N, num = 665; // 665 ���� ����
	cin >> N;
	string str, nums = "666";

	while (N != 0) {
		num++;
		str = to_string(num);
		if (str.find(nums) != string::npos) {
			// ���� ��
			N--;
		}
	}

	cout << str << endl;

	return 0;
}

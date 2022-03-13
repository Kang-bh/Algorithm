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
	string str; // 사람 이름
	vector<string> str1, result; // 듣도, 보도
	cin >> N >> M;

	for (int i = 0; i < N; i++) { // 듣도 못한 사람 입력받기
		cin >> str;
		str1.push_back(str);
	}
	sort(str1.begin(), str1.end());
	for (int j = 0; j < M; j++) { // 보도 못한 사람 입력받기 => 받으면서 듣도 보도 못한 사람 찾기
		cin >> str;
		// algorithm 헤더의 binary_search 이용
		if (binary_search(str1.begin(), str1.end(), str)) {
			// str과 같은 값 찾는 이분탐색 algorithm
			result.push_back(str);
				continue;
		}
	}

	// 시간 초과 발생
	//for (int size = 0; size < str1.size(); size++) {
	//	for (int k = 0; k < str2.size(); k++) {
	//		if (str1[size] == str2[k]) {
	//			// 듣도 보도 못할 시
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
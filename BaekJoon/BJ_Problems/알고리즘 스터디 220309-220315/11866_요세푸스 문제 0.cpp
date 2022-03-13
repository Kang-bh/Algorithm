#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	deque<int> arr;

	for (int i = 1; i <= N; i++) {
		arr.push_back(i);
	}

	cout << "<";
	deque<int>::iterator iter = arr.begin();
	while (!arr.empty()) {
		for (int i = 1; i < K; i++) { // K번째로 이동
			iter++;
			if (iter == arr.end())
				iter = arr.begin();
		}
		if (arr.size() != 1)
			cout << *iter << ", ";
		else
			cout << *iter;
		iter = arr.erase(iter);

		if (iter == arr.end())
			iter = arr.begin();
	}
	cout << ">" << endl;
	return 0;
}
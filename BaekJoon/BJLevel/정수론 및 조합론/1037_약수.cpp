#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> num;

	int N, number;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> number;
		num.push_back(number);
	}
	sort(num.begin(), num.end());

	cout << num.front() * num.back() << endl;


	return 0;
}
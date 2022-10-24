#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;




int main() {

	vector <int> v;

	int N, k, x;

	cin >> N >> k;

	for (int i = 0; i < N; i++) {
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	cout << v[N - k] << endl;

	return 0;
}
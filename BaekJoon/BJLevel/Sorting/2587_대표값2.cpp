#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	
	vector <int> v;

	int num;
	int total = 0;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		total += num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	

	cout << total / 5 << endl;
	cout << v[2] << endl;

	return 0;
}
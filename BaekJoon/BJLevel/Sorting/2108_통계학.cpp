#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	int N, num;
	double sum = 0;
	cin >> N;
	vector <int> check_num(8001, 0);
	vector <int> arr;
	for (int i = 0; i < N; i++) {
		cin >> num;
		sum += num;
		arr.push_back(num);
		check_num[num + 4000]++;
	}
	sort(arr.begin(), arr.end());
	int max = *max_element(check_num.begin(), check_num.end());

	double avg = round(sum / N);
	;

	cout << int(avg) << "\n"; // »ê¼úÆò±Õ
	cout << arr[N / 2] << "\n";

	int check = 2;
	bool find = false;
	int most = 0;
	for (int i = 0; i < 8001; i++) {
		if (!find) {
			if (max == check_num[i]) {
				check--;
				most = i - 4000;
				if (!check) {
					cout << most << "\n"; find = true;
					continue;
				}
			}
		}

	}
	if (!find)
		cout << most << "\n";
	sort(arr.begin(), arr.end());
	cout << arr.back() - arr.front() << "\n";

	return 0;
}
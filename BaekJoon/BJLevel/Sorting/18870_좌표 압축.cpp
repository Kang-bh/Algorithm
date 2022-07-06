#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> points;
vector<int> sorted;

int binarySearch(int max, int val){ // ¹üÀ§ , °ª
	
	int low = 0;
	int high = max-1;
	int mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (sorted[mid] == val) return mid;
		else if (sorted[mid] > val) high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}

int Uni() {
	unique(sorted.begin(), sorted.end());
	int max = 0;
	for (int i = 0; i < sorted.size(); i++) {
		max++;
		if (sorted[i] >= sorted[i+1])
			break;
	}
	return max;
}

void Input() {
	cin >> N;
	int num;
	for (int i = 0; i < N; i++) {
		cin >> num;
		points.push_back(num);
	}
}

int main() {
	Input();
	sorted = points;
	sort(sorted.begin(), sorted.end());
	int max = Uni();


	for (int i = 0; i < points.size(); i++) {
		cout << binarySearch(max, points[i]) << " ";
	}
	cout << "\n";

	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void QuickSort(int arr[], int start, int last) {
	if (start >= last) {
		// 원소가 1개인 경우
		return;
	}
	int pivot = start;
	int left = pivot + 1;
	int right = last;
	int temp;
	
	while (left <= right) {
		while (left <= last && arr[left] <= arr[pivot])
			left++;
		while (right > start && arr[right] >= arr[pivot])
			right--;

		if (left > right) {
			temp = arr[right];
			arr[right] = arr[pivot];
			arr[pivot] = temp;
		}
		else {
			temp = arr[right];
			arr[right] = arr[left];
			arr[left] = temp;
		}

	}

	QuickSort(arr, start, right - 1);
	QuickSort(arr, right + 1, last);

}


int main() {

	int N, count;
	cin >> N;

	int* time_list = new int[N] {-1,};
	int time;

	for (int i = 0; i < N; i++) {
		cin >> time;
		time_list[i] = time;
	}

	QuickSort(time_list, 0, N - 1);

	for (int i = 1; i < N; i++)
		time_list[i] += time_list[i - 1];

	int total = 0;
	for (int i = 0; i < N; i++)
		total += time_list[i];

	cout << total << endl;

	return 0;
}
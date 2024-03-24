#include <vector>
#include <iostream>
using namespace std;

int binary_search(vector<int> arr, int target, int start, int end){
    int mid, first = start, last = end;

    while (first <= last) {
        mid = int((first + last)/2);

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            last = mid - 1;
        } else if (arr[mid] < target){
            first = mid + 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr;
    int n, target, num, result;

    cin >> n >> target;

    for (int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }

    result = binary_search(arr, target, 0, n-1);
    if (result == -1) {
        cout << "No elements in arr" << endl;
    } else {
        cout << result + 1<< endl;
    }
    return 0;
}
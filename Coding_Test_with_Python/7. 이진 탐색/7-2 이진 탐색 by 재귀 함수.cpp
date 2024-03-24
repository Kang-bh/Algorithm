#include <vector>
#include <iostream>
using namespace std;

int binary_search(vector<int> arr, int target, int start, int end) {
    int mid;
    if (start > end) {
        return -1;
    }

    mid = int((start + end) / 2);

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        return binary_search(arr, target, start, mid-1);
    else 
        return binary_search(arr, target, mid+1, end);
 
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
        cout << "No elements int arr" << endl;
    } else {
        cout << result + 1 << endl;
    }
    

    return 0;
}
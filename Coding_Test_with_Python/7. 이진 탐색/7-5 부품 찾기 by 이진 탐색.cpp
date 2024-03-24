#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int>& arr, int target, int start, int end) {
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) end = mid - 1;
        else start = mid + 1; 
    }
    return -1;
}

int n, m;
vector<int> arr;
vector<int> targets;

int N, M;
vector<int> total_arr;
vector<int> request_arr;

bool binary_search(vector<int> arr, int target, int start, int end) {
    if (start > end) {
        return false;   
    }

    int mid = int((start + end)/ 2);
    if (arr[mid] == target) {
        return true;
    } else if (arr[mid] > target) {
        return binary_search(arr, target, start, mid-1);
    } else {
        return binary_search(arr, target, mid+1, end);
    }
}

void input() {
    cin >> N;
    int num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        total_arr.push_back(num);
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> num;
        request_arr.push_back(num);
    }

    // sort
    sort(total_arr.begin(), total_arr.end());
}

void solve() {
    bool result;
    for (int i = 0; i < M; i++) {
        result = binary_search(total_arr, request_arr[i], 0, N-1);
        if (result) {
            cout << "yes" << " ";
        } else {
            cout << "no" << " ";
        }
    }
    cout << endl;
}

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    sort(arr.begin(), arr.end());
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        int target;
        cin >> target;
        targets.push_back(target);
    }
    cout << "solve 1 : ";
    for (int i = 0; i < m; i++) {
        int result = binarySearch(arr, targets[i], 0, n - 1);
        if (result != -1) {
            cout << "yes" << ' ';
        }
        else {
            cout << "no" << ' ';
        }
    }
    cout << endl;
    cout << "solve 2 Input : ";    
    input();
 
    cout << "solve 2 : ";
    solve();

    

}
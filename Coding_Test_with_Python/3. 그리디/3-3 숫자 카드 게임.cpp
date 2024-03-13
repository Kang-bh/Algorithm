#include <iostream>
#include <algorithm>
#include <vector>
#define MAXNUM 10001;
using namespace std;

int N, M;

vector<int> arr;

void print() {
    for (auto iter = arr.begin(); iter != arr.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
}

void setData () {
    int number;
    int smallestNumber = MAXNUM;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> number;
            
            
            if (number < smallestNumber) {
                smallestNumber = number;
            }
        }
        
        arr.push_back(smallestNumber);
        smallestNumber = MAXNUM;
    }
}

void solve() {

    print();
    sort(arr.rbegin(), arr.rend());

    cout << arr[0] << endl;
}

int main() {

    cin >> N >> M;
    
    setData();

    solve();

    return 0;
}
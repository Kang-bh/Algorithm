#include <iostream>
#include <string>
#include <vector>
using namespace std;


int sequential_search(int N, string target, vector<string> arr) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == target) {
            return i + 1;
        }
    }
    return -1;
}

int N;
string target;
vector<string> arr;

int main() {
    cin >> N >> target;

    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;
        arr.push_back(input);
    }

    cout << sequential_search(N, target, arr) << endl;
}
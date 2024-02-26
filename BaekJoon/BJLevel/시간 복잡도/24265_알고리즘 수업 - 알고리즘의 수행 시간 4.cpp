#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    long long result = 0;
    cin >> N;
    
    for (int i = 1; i < N; i++) {
        for (int j = i +1; j < N + 1; j++) {
            result += 1;
        }
    }
    cout << result << endl;
    cout << 2 << endl;
}
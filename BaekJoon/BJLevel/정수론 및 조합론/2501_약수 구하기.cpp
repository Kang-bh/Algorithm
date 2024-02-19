#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;



int main() {

    int N, K;

    vector <int> divisors;
    cin >> N >> K;
    
    for (int i = 1; i <= floor(sqrt(N)); i++) {
        if (N % i == 0) {
            divisors.push_back(i);
            if (i != N/i) {
                divisors.push_back(N/i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    if (divisors.size() >= K) {
        cout << divisors[K-1] << endl;
    } else {
        cout << 0 << endl;
    }


    return 0;
}
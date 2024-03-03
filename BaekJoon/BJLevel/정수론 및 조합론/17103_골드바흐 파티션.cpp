#include <iostream>
#include <cmath>
using namespace std;

bool primeArray[1000001] = {false, };
bool checkPrimeFlag = true;

void checkPrime(int n) {
    for (int i = 0; i <= n; i++) {
        primeArray[i] = true;
    }

    for (int i = 2; i <= n; i++) {
        if (primeArray[i]) {
            for (int j = i * 2; j <= n; j += i) {
                primeArray[j] = false;
            }
        }
    }
}

void solve(int N) {
    int result = 0;
    
    for (int i = 2; i <= N/2; i++) {
        if(primeArray[i] && primeArray[N-i]) {
            result++;
        }
    }

    cout << result << endl;
}

int main() {

    int T, N;
    cin >> T;
    checkPrime(1000001);

    for (int i = 0; i < T; i++) {
        cin >> N;
        solve(N);
    }

    return 0;
}
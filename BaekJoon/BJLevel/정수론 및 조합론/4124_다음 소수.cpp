#include <iostream>
#include <cmath>
using namespace std;

bool sosu(long long int num) {

    if (num < 2) 
        return false;
    
    long long a = (long long int) sqrt(num);
    for (long long i = 2; i <= a; i++) {
        if (num % i == 0) return false;
    }

    return true;
}

void solve(long long int n) {
    while(true) {
        if (sosu(n)) {
            cout << n << endl;
            break;
        }
        n++;

    }
}

int main() {

    long long int n;
    int testCaseCount;

    cin >> testCaseCount;

    for (int i = 0; i < testCaseCount; i++) {
        cin >> n;
        solve(n);
    }

    return 0;
}
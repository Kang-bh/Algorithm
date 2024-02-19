#include <iostream>
using namespace std;

long long int gcd(long long int A, long long int B) {
    long long int x = A, y = B, r;

    while(x % y != 0 && x != 0) {
        r = x % y;
        x = y;
        y = r;        
    }

    return y;
}

long long int LCM(long long int A, long long int B) {
    return A * B / gcd(A, B);
}

int main() {

    long long int A, B;
    cin >> A >> B;

    cout << LCM(A, B) << endl;

    return 0;
}
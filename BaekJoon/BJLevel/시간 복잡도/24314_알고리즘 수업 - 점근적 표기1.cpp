#include <iostream>
#include <cmath>
using namespace std;

// todo : find problem
// bool solve(int a1, int a0, int c, int n0) {
//     return (c > a1) && (a1 * n0 + a0 <= c * n0);
// }

bool solve(int a1, int a0, int c, int n0) {
    if (c-a1 < 0) {
        return false;
    } else {
       return ((c - a1) * n0 - a0 >= 0);
    }
}

int main() {
    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;


   cout << solve(a1, a0, c, n0) << endl;
}
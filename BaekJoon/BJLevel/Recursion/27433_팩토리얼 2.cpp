#include <iostream>
#include <cmath>
using namespace std;

long int factorial(int N) {
    if (N == 1 || N == 0) {
        return 1;
    }

    return N * factorial(N-1); 
}

int main() {

    int N;

    cin >> N;

    cout << factorial(N) << endl;

    return 0;
}